// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ContextEnum.proto

package me.piotr.wera;

public final class ContextEnumOuterClass {
  private ContextEnumOuterClass() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code me.piotr.wera.ContextEnum}
   */
  public enum ContextEnum
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>UNDEFINEX = 0;</code>
     */
    UNDEFINEX(0),
    /**
     * <code>GOOD = 1;</code>
     */
    GOOD(1),
    /**
     * <code>BAD = 2;</code>
     */
    BAD(2),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>UNDEFINEX = 0;</code>
     */
    public static final int UNDEFINEX_VALUE = 0;
    /**
     * <code>GOOD = 1;</code>
     */
    public static final int GOOD_VALUE = 1;
    /**
     * <code>BAD = 2;</code>
     */
    public static final int BAD_VALUE = 2;


    public final int getNumber() {
      if (this == UNRECOGNIZED) {
        throw new java.lang.IllegalArgumentException(
            "Can't get the number of an unknown enum value.");
      }
      return value;
    }

    /**
     * @param value The numeric wire value of the corresponding enum entry.
     * @return The enum associated with the given numeric wire value.
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static ContextEnum valueOf(int value) {
      return forNumber(value);
    }

    /**
     * @param value The numeric wire value of the corresponding enum entry.
     * @return The enum associated with the given numeric wire value.
     */
    public static ContextEnum forNumber(int value) {
      switch (value) {
        case 0: return UNDEFINEX;
        case 1: return GOOD;
        case 2: return BAD;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<ContextEnum>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        ContextEnum> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<ContextEnum>() {
            public ContextEnum findValueByNumber(int number) {
              return ContextEnum.forNumber(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(ordinal());
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return me.piotr.wera.ContextEnumOuterClass.getDescriptor().getEnumTypes().get(0);
    }

    private static final ContextEnum[] VALUES = values();

    public static ContextEnum valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      if (desc.getIndex() == -1) {
        return UNRECOGNIZED;
      }
      return VALUES[desc.getIndex()];
    }

    private final int value;

    private ContextEnum(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:me.piotr.wera.ContextEnum)
  }


  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\021ContextEnum.proto\022\rme.piotr.wera*/\n\013Co" +
      "ntextEnum\022\r\n\tUNDEFINEX\020\000\022\010\n\004GOOD\020\001\022\007\n\003BA" +
      "D\020\002b\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
