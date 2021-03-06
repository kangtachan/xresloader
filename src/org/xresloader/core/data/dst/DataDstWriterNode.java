package org.xresloader.core.data.dst;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import org.xresloader.Xresloader;
import org.xresloader.core.data.err.ConvException;
import org.xresloader.core.engine.IdentifyDescriptor;

/**
 * Created by owentou on 2014/10/11.
 */
public class DataDstWriterNode {
    public enum JAVA_TYPE {
        INT, LONG, BOOLEAN, STRING, BYTES, FLOAT, DOUBLE, MESSAGE
    }

    static public class DataDstFieldExtUE {
        public long keyTag = 0;
        public String ueTypeName = null;
        public boolean ueTypeIsClass = false;
    }

    static public class DataDstFieldExt {
        public String description = null;
        public String verifier = null;
        private DataDstFieldExtUE ue = null;

        public DataDstFieldExtUE mutableUE() {
            if (null != ue) {
                return ue;
            }

            ue = new DataDstFieldExtUE();
            return ue;
        }
    }

    static public class DataDstMessageExtUE {
        public String helper = null;
        public boolean notDataTable = false;
    }

    static public class DataDstMessageExt {
        public String description = null;
        public List<Xresloader.IndexDescriptor> kvIndex = null;
        public List<Xresloader.IndexDescriptor> klIndex = null;

        private DataDstMessageExtUE ue = null;

        public DataDstMessageExtUE mutableUE() {
            if (null != ue) {
                return ue;
            }

            ue = new DataDstMessageExtUE();
            return ue;
        }
    }

    static public class DataDstFieldDescriptor {
        private int index = 0;
        private String name = null;
        private boolean isListB = false;
        private DataDstMessageDescriptor typeDescriptor = null;
        private DataDstFieldExt extension = null;

        public DataDstFieldDescriptor(DataDstMessageDescriptor typeDesc, int index, String name, boolean isList) {
            this.typeDescriptor = typeDesc;
            this.index = index;
            this.name = name;
            this.isListB = isList;
        }

        public JAVA_TYPE getType() {
            return typeDescriptor.getType();
        }

        public DataDstMessageDescriptor getTypeDescriptor() {
            return this.typeDescriptor;
        }

        public int getIndex() {
            return this.index;
        }

        public String getName() {
            return this.name;
        }

        public boolean isList() {
            return this.isListB;
        }

        public DataDstFieldExt mutableExtension() {
            if (null != extension) {
                return extension;
            }

            extension = new DataDstFieldExt();
            return extension;
        }
    }

    static public class DataDstMessageDescriptor {
        private JAVA_TYPE type = JAVA_TYPE.INT;
        private String packageName = null;
        private String messageName = null;
        private String fullName = null;
        private DataDstMessageExt extension = null;
        public HashMap<String, DataDstFieldDescriptor> fields = null;

        public DataDstMessageDescriptor(JAVA_TYPE type, String pkgName, String msgName) {
            this.type = type;
            if (msgName == null || msgName.isEmpty()) {
                msgName = type.toString();
            }

            this.packageName = pkgName;
            this.messageName = msgName;
            if (this.packageName == null || this.packageName.isEmpty()) {
                this.fullName = msgName;
            } else {
                this.fullName = String.format("%s.%s", this.packageName, this.messageName);
            }
        }

        public JAVA_TYPE getType() {
            return this.type;
        }

        public String getPackageName() {
            return this.packageName;
        }

        public String getMessageName() {
            return this.messageName;
        }

        public String getFullName() {
            return this.fullName;
        }

        public DataDstMessageExt mutableExtension() {
            if (null != extension) {
                return extension;
            }

            extension = new DataDstMessageExt();
            return extension;
        }
    }

    public static class DataDstChildrenNode {
        public DataDstFieldDescriptor innerDesc = null;
        public boolean isRequired = false;
        public Object fieldDescriptor = null;
        public ArrayList<DataDstWriterNode> nodes = null;
    }

    private HashMap<String, DataDstChildrenNode> children = null;
    private DataDstMessageDescriptor typeDescriptor = null;
    private DataDstFieldDescriptor fieldDescriptor = null;
    public Object privateData = null; // 关联的Message描述信息，不同的DataDstImpl子类不一样。这里的数据和抽象数据结构的类型有关
    public IdentifyDescriptor identify = null; // 关联的Field/Excel列信息，同一个抽象数据结构类型可能对应的数据几乎不一样。和具体某个结构内的字段有关

    static private HashMap<JAVA_TYPE, DataDstMessageDescriptor> defaultDescs = new HashMap<JAVA_TYPE, DataDstMessageDescriptor>();

    static public DataDstMessageDescriptor getDefaultMessageDescriptor(JAVA_TYPE type) {
        DataDstMessageDescriptor ret = defaultDescs.getOrDefault(type, null);
        if (ret != null) {
            return ret;
        }

        ret = new DataDstMessageDescriptor(type, null, null);
        defaultDescs.put(type, ret);
        return ret;
    }

    private DataDstWriterNode(Object privateData, DataDstMessageDescriptor typeDesc) {
        this.privateData = privateData;
        this.typeDescriptor = typeDesc;
    }

    static public String makeChildPath(String prefix, String child_name, int list_index) {
        if (list_index >= 0)
            return prefix.isEmpty() ? String.format("%s[%d]", child_name, list_index)
                    : String.format("%s.%s[%d]", prefix, child_name, list_index);

        return makeChildPath(prefix, child_name);
    }

    static public String makeChildPath(String prefix, String child_name) {
        return prefix.isEmpty() ? child_name : String.format("%s.%s", prefix, child_name);
    }

    static public String makeNodeName(String _name, int list_index) {
        if (list_index >= 0)
            return String.format("%s[%d]", _name, list_index);

        return makeNodeName(_name);
    }

    static public String makeNodeName(String _name) {
        return _name;
    }

    public HashMap<String, DataDstChildrenNode> getChildren() {
        if (null == children)
            children = new HashMap<String, DataDstChildrenNode>();
        return children;
    }

    public DataDstMessageDescriptor getTypeDescriptor() {
        return this.typeDescriptor;
    }

    public JAVA_TYPE getType() {
        return this.typeDescriptor.getType();
    }

    public String getPackageName() {
        return this.typeDescriptor.getPackageName();
    }

    public String getMessageName() {
        return this.typeDescriptor.getMessageName();
    }

    public String getFullName() {
        return this.typeDescriptor.getFullName();
    }

    public DataDstMessageExt getMessageExtension() {
        return this.typeDescriptor.mutableExtension();
    }

    public DataDstFieldDescriptor getFieldDescriptor() {
        return this.fieldDescriptor;
    }

    public int getFieldIndex() {
        if (this.fieldDescriptor == null) {
            return 0;
        }

        return this.fieldDescriptor.getIndex();
    }

    public String getFieldName() {
        if (this.fieldDescriptor == null) {
            return "";
        }

        return this.fieldDescriptor.getName();
    }

    public DataDstFieldExt getFieldExtension() {
        if (this.fieldDescriptor == null) {
            return null;
        }

        return this.fieldDescriptor.mutableExtension();
    }

    public String getChildPath(String prefix, int list_index, String child_name) {
        DataDstChildrenNode res = getChildren().getOrDefault(child_name, null);
        if (null == res)
            return null;

        if (res.innerDesc.isList())
            return String.format("%s[%d].%s", prefix, list_index, child_name);

        return getChildPath(prefix, child_name);
    }

    public String getChildPath(String prefix, String child_name) {
        return prefix.isEmpty() ? child_name : String.format("%s.%s", prefix, child_name);
    }

    public DataDstChildrenNode addChild(String child_name, DataDstWriterNode node, Object _field_descriptor,
            boolean isList, boolean isRequired) throws ConvException {
        DataDstChildrenNode res = getChildren().getOrDefault(child_name, null);
        if (null == res) {
            res = new DataDstChildrenNode();
            getChildren().put(child_name, res);
            res.innerDesc = typeDescriptor.fields.get(child_name);
            res.isRequired = isRequired;
            res.fieldDescriptor = _field_descriptor;
        }

        if (null == res.nodes) {
            res.nodes = new ArrayList<DataDstWriterNode>();
        }
        res.nodes.add(node);

        // 复制一份字段数据结构描述
        node.setFieldDescriptor(res.innerDesc);

        return res;
    }

    public void setFieldDescriptor(DataDstFieldDescriptor fd) throws ConvException {
        if (fd == null) {
            this.fieldDescriptor = fd;
            return;
        }

        if (fd.getTypeDescriptor() != this.typeDescriptor) {
            throw new ConvException(String.format("type descriptor and field descriptor not match"));
        }

        this.fieldDescriptor = fd;
    }

    /**
     * 创建节点
     *
     * @param privateData 原始协议描述器
     * @param typeDesc    内部描述类型
     * @return 创建爱你的节点
     */
    static public DataDstWriterNode create(Object privateData, DataDstMessageDescriptor typeDesc) {
        return new DataDstWriterNode(privateData, typeDesc);
    }
}
