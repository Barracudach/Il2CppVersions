typedef void (*methodPointerType)();
typedef int32_t il2cpp_array_size_t;
typedef uint32_t Il2CppMethodSlot;
const int ipv6AddressSize = 16;
enum Il2CppTypeEnum {
 IL2CPP_TYPE_END = 0x00,
 IL2CPP_TYPE_VOID = 0x01,
 IL2CPP_TYPE_BOOLEAN = 0x02,
 IL2CPP_TYPE_CHAR = 0x03,
 IL2CPP_TYPE_I1 = 0x04,
 IL2CPP_TYPE_U1 = 0x05,
 IL2CPP_TYPE_I2 = 0x06,
 IL2CPP_TYPE_U2 = 0x07,
 IL2CPP_TYPE_I4 = 0x08,
 IL2CPP_TYPE_U4 = 0x09,
 IL2CPP_TYPE_I8 = 0x0a,
 IL2CPP_TYPE_U8 = 0x0b,
 IL2CPP_TYPE_R4 = 0x0c,
 IL2CPP_TYPE_R8 = 0x0d,
 IL2CPP_TYPE_STRING = 0x0e,
 IL2CPP_TYPE_PTR = 0x0f,
 IL2CPP_TYPE_BYREF = 0x10,
 IL2CPP_TYPE_VALUETYPE = 0x11,
 IL2CPP_TYPE_CLASS = 0x12,
 IL2CPP_TYPE_VAR = 0x13,
 IL2CPP_TYPE_ARRAY = 0x14,
 IL2CPP_TYPE_GENERICINST= 0x15,
 IL2CPP_TYPE_TYPEDBYREF = 0x16,
 IL2CPP_TYPE_I = 0x18,
 IL2CPP_TYPE_U = 0x19,
 IL2CPP_TYPE_FNPTR = 0x1b,
 IL2CPP_TYPE_OBJECT = 0x1c,
 IL2CPP_TYPE_SZARRAY = 0x1d,
 IL2CPP_TYPE_MVAR = 0x1e,
 IL2CPP_TYPE_CMOD_REQD = 0x1f,
 IL2CPP_TYPE_CMOD_OPT = 0x20,
 IL2CPP_TYPE_INTERNAL = 0x21,
 IL2CPP_TYPE_MODIFIER = 0x40,
 IL2CPP_TYPE_SENTINEL = 0x41,
 IL2CPP_TYPE_PINNED = 0x45,
 IL2CPP_TYPE_ENUM = 0x55
};
typedef int32_t TypeIndex;
typedef int32_t TypeDefinitionIndex;
typedef int32_t FieldIndex;
typedef int32_t DefaultValueIndex;
typedef int32_t DefaultValueDataIndex;
typedef int32_t CustomAttributeIndex;
typedef int32_t ParameterIndex;
typedef int32_t MethodIndex;
typedef int32_t GenericMethodIndex;
typedef int32_t PropertyIndex;
typedef int32_t EventIndex;
typedef int32_t GenericContainerIndex;
typedef int32_t GenericParameterIndex;
typedef int16_t GenericParameterConstraintIndex;
typedef int32_t NestedTypeIndex;
typedef int32_t InterfacesIndex;
typedef int32_t VTableIndex;
typedef int32_t InterfaceOffsetIndex;
typedef int32_t RGCTXIndex;
typedef int32_t StringIndex;
typedef int32_t StringLiteralIndex;
typedef int32_t GenericInstIndex;
typedef int32_t ImageIndex;
typedef int32_t AssemblyIndex;
const TypeIndex kTypeIndexInvalid = -1;
const TypeDefinitionIndex kTypeDefinitionIndexInvalid = -1;
const DefaultValueDataIndex kDefaultValueIndexNull = -1;
const EventIndex kEventIndexInvalid = -1;
const FieldIndex kFieldIndexInvalid = -1;
const MethodIndex kMethodIndexInvalid = -1;
const PropertyIndex kPropertyIndexInvalid = -1;
const GenericContainerIndex kGenericContainerIndexInvalid = -1;
const GenericParameterIndex kGenericParameterIndexInvalid = -1;
const RGCTXIndex kRGCTXIndexInvalid = -1;
const StringLiteralIndex kStringLiteralIndexInvalid = -1;
typedef uint32_t EncodedMethodIndex;
enum Il2CppMetadataUsage
{
 kIl2CppMetadataUsageInvalid,
 kIl2CppMetadataUsageTypeInfo,
 kIl2CppMetadataUsageIl2CppType,
 kIl2CppMetadataUsageMethodDef,
 kIl2CppMetadataUsageFieldInfo,
 kIl2CppMetadataUsageStringLiteral,
 kIl2CppMetadataUsageMethodRef,
};
static inline Il2CppMetadataUsage GetEncodedIndexType (EncodedMethodIndex index)
{
 return (Il2CppMetadataUsage)((index & 0xE0000000) >> 29);
}
static inline uint32_t GetDecodedMethodIndex (EncodedMethodIndex index)
{
 return index & 0x1FFFFFFFU;
}
struct Il2CppImage;
struct Il2CppType;
struct Il2CppTypeDefinitionMetadata;
union Il2CppRGCTXDefinitionData
{
 int32_t rgctxDataDummy;
 MethodIndex methodIndex;
 TypeIndex typeIndex;
};
enum Il2CppRGCTXDataType
{
 IL2CPP_RGCTX_DATA_INVALID,
 IL2CPP_RGCTX_DATA_TYPE,
 IL2CPP_RGCTX_DATA_CLASS,
 IL2CPP_RGCTX_DATA_METHOD
};
struct Il2CppRGCTXDefinition
{
 Il2CppRGCTXDataType type;
 Il2CppRGCTXDefinitionData data;
};
struct Il2CppInterfaceOffsetPair
{
 TypeIndex interfaceTypeIndex;
 int32_t offset;
};
struct Il2CppTypeDefinition
{
 StringIndex nameIndex;
 StringIndex namespaceIndex;
 CustomAttributeIndex customAttributeIndex;
 TypeIndex byvalTypeIndex;
 TypeIndex byrefTypeIndex;
 TypeIndex declaringTypeIndex;
 TypeIndex parentIndex;
 TypeIndex elementTypeIndex;
 RGCTXIndex rgctxStartIndex;
 int32_t rgctxCount;
 GenericContainerIndex genericContainerIndex;
 MethodIndex delegateWrapperFromManagedToNativeIndex;
 int32_t marshalingFunctionsIndex;
 uint32_t flags;
 FieldIndex fieldStart;
 MethodIndex methodStart;
 EventIndex eventStart;
 PropertyIndex propertyStart;
 NestedTypeIndex nestedTypesStart;
 InterfacesIndex interfacesStart;
 VTableIndex vtableStart;
 InterfacesIndex interfaceOffsetsStart;
 uint16_t method_count;
 uint16_t property_count;
 uint16_t field_count;
 uint16_t event_count;
 uint16_t nested_type_count;
 uint16_t vtable_count;
 uint16_t interfaces_count;
 uint16_t interface_offsets_count;
 uint32_t bitfield;
 uint32_t token;
};
struct Il2CppFieldDefinition
{
 StringIndex nameIndex;
 TypeIndex typeIndex;
 CustomAttributeIndex customAttributeIndex;
 uint32_t token;
};
struct Il2CppFieldDefaultValue
{
 FieldIndex fieldIndex;
 TypeIndex typeIndex;
 DefaultValueDataIndex dataIndex;
};
struct Il2CppFieldMarshaledSize
{
 FieldIndex fieldIndex;
 TypeIndex typeIndex;
 int32_t size;
};
struct Il2CppFieldRef
{
 TypeIndex typeIndex;
 FieldIndex fieldIndex;
};
struct Il2CppParameterDefinition
{
 StringIndex nameIndex;
 uint32_t token;
 CustomAttributeIndex customAttributeIndex;
 TypeIndex typeIndex;
};
struct Il2CppParameterDefaultValue
{
 ParameterIndex parameterIndex;
 TypeIndex typeIndex;
 DefaultValueDataIndex dataIndex;
};
struct Il2CppMethodDefinition
{
 StringIndex nameIndex;
 TypeDefinitionIndex declaringType;
 TypeIndex returnType;
 ParameterIndex parameterStart;
 CustomAttributeIndex customAttributeIndex;
 GenericContainerIndex genericContainerIndex;
 MethodIndex methodIndex;
 MethodIndex invokerIndex;
 MethodIndex delegateWrapperIndex;
 RGCTXIndex rgctxStartIndex;
 int32_t rgctxCount;
 uint32_t token;
 uint16_t flags;
 uint16_t iflags;
 uint16_t slot;
 uint16_t parameterCount;
};
struct Il2CppEventDefinition
{
 StringIndex nameIndex;
 TypeIndex typeIndex;
 MethodIndex add;
 MethodIndex remove;
 MethodIndex raise;
 CustomAttributeIndex customAttributeIndex;
 uint32_t token;
};
struct Il2CppPropertyDefinition
{
 StringIndex nameIndex;
 MethodIndex get;
 MethodIndex set;
 uint32_t attrs;
 CustomAttributeIndex customAttributeIndex;
 uint32_t token;
};
struct Il2CppMethodSpec
{
 MethodIndex methodDefinitionIndex;
 GenericInstIndex classIndexIndex;
 GenericInstIndex methodIndexIndex;
};
struct Il2CppStringLiteral
{
 uint32_t length;
 StringLiteralIndex dataIndex;
};
struct Il2CppGenericMethodIndices
{
 MethodIndex methodIndex;
 MethodIndex invokerIndex;
};
struct Il2CppGenericMethodFunctionsDefinitions
{
 GenericMethodIndex genericMethodIndex;
 Il2CppGenericMethodIndices indices;
};
const int kPublicKeyByteLength = 8;
struct Il2CppAssemblyName
{
 StringIndex nameIndex;
 StringIndex cultureIndex;
 StringIndex hashValueIndex;
 StringIndex publicKeyIndex;
 uint32_t hash_alg;
 int32_t hash_len;
 uint32_t flags;
 int32_t major;
 int32_t minor;
 int32_t build;
 int32_t revision;
 uint8_t publicKeyToken[8];
};
struct Il2CppImageDefinition
{
 StringIndex nameIndex;
 AssemblyIndex assemblyIndex;
 TypeDefinitionIndex typeStart;
 uint32_t typeCount;
 MethodIndex entryPointIndex;
 uint32_t token;
};
struct Il2CppAssembly
{
 ImageIndex imageIndex;
 CustomAttributeIndex customAttributeIndex;
 Il2CppAssemblyName aname;
};
struct Il2CppMetadataUsageList
{
 uint32_t start;
 uint32_t count;
};
struct Il2CppMetadataUsagePair
{
 uint32_t destinationIndex;
 uint32_t encodedSourceIndex;
};
#pragma pack(push, p1,4)
struct Il2CppGlobalMetadataHeader
{
 int32_t sanity;
 int32_t version;
 int32_t stringLiteralOffset;
 int32_t stringLiteralCount;
 int32_t stringLiteralDataOffset;
 int32_t stringLiteralDataCount;
 int32_t stringOffset;
 int32_t stringCount;
 int32_t eventsOffset;
 int32_t eventsCount;
 int32_t propertiesOffset;
 int32_t propertiesCount;
 int32_t methodsOffset;
 int32_t methodsCount;
 int32_t parameterDefaultValuesOffset;
 int32_t parameterDefaultValuesCount;
 int32_t fieldDefaultValuesOffset;
 int32_t fieldDefaultValuesCount;
 int32_t fieldAndParameterDefaultValueDataOffset;
 int32_t fieldAndParameterDefaultValueDataCount;
 int32_t fieldMarshaledSizesOffset;
 int32_t fieldMarshaledSizesCount;
 int32_t parametersOffset;
 int32_t parametersCount;
 int32_t fieldsOffset;
 int32_t fieldsCount;
 int32_t genericParametersOffset;
 int32_t genericParametersCount;
 int32_t genericParameterConstraintsOffset;
 int32_t genericParameterConstraintsCount;
 int32_t genericContainersOffset;
 int32_t genericContainersCount;
 int32_t nestedTypesOffset;
 int32_t nestedTypesCount;
 int32_t interfacesOffset;
 int32_t interfacesCount;
 int32_t vtableMethodsOffset;
 int32_t vtableMethodsCount;
 int32_t interfaceOffsetsOffset;
 int32_t interfaceOffsetsCount;
 int32_t typeDefinitionsOffset;
 int32_t typeDefinitionsCount;
 int32_t rgctxEntriesOffset;
 int32_t rgctxEntriesCount;
 int32_t imagesOffset;
 int32_t imagesCount;
 int32_t assembliesOffset;
 int32_t assembliesCount;
 int32_t metadataUsageListsOffset;
 int32_t metadataUsageListsCount;
 int32_t metadataUsagePairsOffset;
 int32_t metadataUsagePairsCount;
 int32_t fieldRefsOffset;
 int32_t fieldRefsCount;
};
#pragma pack(pop, p1)
struct Il2CppClass;
struct MethodInfo;
struct Il2CppType;
struct Il2CppArrayType {
 const Il2CppType* etype;
 uint8_t rank;
 uint8_t numsizes;
 uint8_t numlobounds;
 int *sizes;
 int *lobounds;
};
struct Il2CppGenericInst {
 uint32_t type_argc;
 const Il2CppType **type_argv;
};
struct Il2CppGenericContext {
 const Il2CppGenericInst *class_inst;
 const Il2CppGenericInst *method_inst;
};
struct Il2CppGenericParameter
{
 GenericContainerIndex ownerIndex;
 StringIndex nameIndex;
 GenericParameterConstraintIndex constraintsStart;
 int16_t constraintsCount;
 uint16_t num;
 uint16_t flags;
};
struct Il2CppGenericContainer
{
 int32_t ownerIndex;
 int32_t type_argc;
 int32_t is_method;
 GenericParameterIndex genericParameterStart;
};
struct Il2CppGenericClass
{
 TypeDefinitionIndex typeDefinitionIndex;
 Il2CppGenericContext context;
 Il2CppClass *cached_class;
};
struct Il2CppGenericMethod
{
 const MethodInfo* methodDefinition;
 Il2CppGenericContext context;
};
struct Il2CppType {
 union {
  void* dummy;
  TypeDefinitionIndex klassIndex;
  const Il2CppType *type;
  Il2CppArrayType *array;
  GenericParameterIndex genericParameterIndex;
  Il2CppGenericClass *generic_class;
 } data;
 unsigned int attrs : 16;
 Il2CppTypeEnum type : 8;
 unsigned int num_mods : 6;
 unsigned int byref : 1;
 unsigned int pinned : 1;
};
typedef enum {
 IL2CPP_CALL_DEFAULT,
 IL2CPP_CALL_C,
 IL2CPP_CALL_STDCALL,
 IL2CPP_CALL_THISCALL,
 IL2CPP_CALL_FASTCALL,
 IL2CPP_CALL_VARARG
} Il2CppCallConvention;
enum Il2CppCharSet
{
 CHARSET_ANSI,
 CHARSET_UNICODE
};
struct PInvokeArguments
{
 const char* moduleName;
 const char* entryPoint;
 Il2CppCallConvention callingConvention;
 Il2CppCharSet charSet;
 int parameterSize;
 bool isNoMangle;
};
struct Il2CppClass;
struct Il2CppImage;
struct Il2CppAssembly;
struct Il2CppAppDomain;
struct Il2CppDelegate;
struct Il2CppAppContext;
struct Il2CppNameToTypeDefinitionIndexHashTable;
enum Il2CppTypeNameFormat {
 IL2CPP_TYPE_NAME_FORMAT_IL,
 IL2CPP_TYPE_NAME_FORMAT_REFLECTION,
 IL2CPP_TYPE_NAME_FORMAT_FULL_NAME,
 IL2CPP_TYPE_NAME_FORMAT_ASSEMBLY_QUALIFIED
};
extern bool g_il2cpp_is_fully_initialized;
typedef struct {
 Il2CppImage *corlib;
 Il2CppClass *object_class;
 Il2CppClass *byte_class;
 Il2CppClass *void_class;
 Il2CppClass *boolean_class;
 Il2CppClass *sbyte_class;
 Il2CppClass *int16_class;
 Il2CppClass *uint16_class;
 Il2CppClass *int32_class;
 Il2CppClass *uint32_class;
 Il2CppClass *int_class;
 Il2CppClass *uint_class;
 Il2CppClass *int64_class;
 Il2CppClass *uint64_class;
 Il2CppClass *single_class;
 Il2CppClass *double_class;
 Il2CppClass *char_class;
 Il2CppClass *string_class;
 Il2CppClass *enum_class;
 Il2CppClass *array_class;
 Il2CppClass *delegate_class;
 Il2CppClass *multicastdelegate_class;
 Il2CppClass *asyncresult_class;
 Il2CppClass *manualresetevent_class;
 Il2CppClass *typehandle_class;
 Il2CppClass *fieldhandle_class;
 Il2CppClass *methodhandle_class;
 Il2CppClass *systemtype_class;
 Il2CppClass *monotype_class;
 Il2CppClass *exception_class;
 Il2CppClass *threadabortexception_class;
 Il2CppClass *thread_class;
 Il2CppClass *appdomain_class;
 Il2CppClass *appdomain_setup_class;
 Il2CppClass *field_info_class;
 Il2CppClass *method_info_class;
 Il2CppClass *property_info_class;
 Il2CppClass *event_info_class;
 Il2CppClass *mono_event_info_class;
 Il2CppClass *stringbuilder_class;
 Il2CppClass *stack_frame_class;
 Il2CppClass *stack_trace_class;
 Il2CppClass *marshal_class;
 Il2CppClass *typed_reference_class;
 Il2CppClass *marshalbyrefobject_class;
 Il2CppClass *generic_ilist_class;
 Il2CppClass *generic_icollection_class;
 Il2CppClass *generic_ienumerable_class;
 Il2CppClass *generic_nullable_class;
 Il2CppClass *customattribute_data_class;
 Il2CppClass *version;
 Il2CppClass *culture_info;
 Il2CppClass *async_call_class;
 Il2CppClass *assembly_class;
 Il2CppClass *assembly_name_class;
 Il2CppClass *enum_info_class;
 Il2CppClass *mono_field_class;
 Il2CppClass *mono_method_class;
 Il2CppClass *mono_method_info_class;
 Il2CppClass *mono_property_info_class;
 Il2CppClass *parameter_info_class;
 Il2CppClass *module_class;
 Il2CppClass *pointer_class;
 Il2CppClass *system_exception_class;
 Il2CppClass *argument_exception_class;
 Il2CppClass *wait_handle_class;
 Il2CppClass *safe_handle_class;
 Il2CppClass *sort_key_class;
} Il2CppDefaults;
extern Il2CppDefaults il2cpp_defaults;
struct Il2CppClass;
struct MethodInfo;
struct FieldInfo;
struct Il2CppObject;
struct MemberInfo;
struct CustomAttributesCache
{
 int count;
 Il2CppObject** attributes;
};
struct CustomAttributeTypeCache
{
 int count;
 Il2CppClass** attributeTypes;
};
typedef void (*CustomAttributesCacheGenerator)(CustomAttributesCache*, CustomAttributeTypeCache*);
const int THREAD_STATIC_FIELD_OFFSET = -1;
struct FieldInfo
{
 const char* name;
 const Il2CppType* type;
 Il2CppClass *parent;
 int32_t offset;
 CustomAttributeIndex customAttributeIndex;
 uint32_t token;
};
struct PropertyInfo
{
 Il2CppClass *parent;
 const char *name;
 const MethodInfo *get;
 const MethodInfo *set;
 uint32_t attrs;
 CustomAttributeIndex customAttributeIndex;
 uint32_t token;
};
struct EventInfo
{
 const char* name;
 const Il2CppType* eventType;
 Il2CppClass* parent;
 const MethodInfo* add;
 const MethodInfo* remove;
 const MethodInfo* raise;
 CustomAttributeIndex customAttributeIndex;
 uint32_t token;
};
struct ParameterInfo
{
 const char* name;
 int32_t position;
 uint32_t token;
 CustomAttributeIndex customAttributeIndex;
 const Il2CppType* parameter_type;
};
typedef void* (*InvokerMethod)(const MethodInfo*, void*, void**);
union Il2CppRGCTXData
{
 void* rgctxDataDummy;
 const MethodInfo* method;
 const Il2CppType* type;
 Il2CppClass* klass;
};
struct MethodInfo
{
 methodPointerType method;
 InvokerMethod invoker_method;
 const char* name;
 Il2CppClass *declaring_type;
 const Il2CppType *return_type;
 const ParameterInfo* parameters;
 union
 {
  const Il2CppRGCTXData* rgctx_data;
  const Il2CppMethodDefinition* methodDefinition;
 };
 union
 {
  const Il2CppGenericMethod* genericMethod;
  const Il2CppGenericContainer* genericContainer;
 };
 CustomAttributeIndex customAttributeIndex;
 uint32_t token;
 uint16_t flags;
 uint16_t iflags;
 uint16_t slot;
 uint8_t parameters_count;
 uint8_t is_generic : 1;
 uint8_t is_inflated : 1;
};
struct Il2CppRuntimeInterfaceOffsetPair
{
 Il2CppClass* interfaceType;
 int32_t offset;
};
struct Il2CppClass
{
 const Il2CppImage* image;
 void* gc_desc;
 const char* name;
 const char* namespaze;
 const Il2CppType* byval_arg;
 const Il2CppType* this_arg;
 Il2CppClass* element_class;
 Il2CppClass* castClass;
 Il2CppClass* declaringType;
 Il2CppClass* parent;
 Il2CppGenericClass *generic_class;
 const Il2CppTypeDefinition* typeDefinition;
 FieldInfo* fields;
 const EventInfo* events;
 const PropertyInfo* properties;
 const MethodInfo** methods;
 Il2CppClass** nestedTypes;
 Il2CppClass** implementedInterfaces;
 const MethodInfo** vtable;
 Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
 void* static_fields;
 const Il2CppRGCTXData* rgctx_data;
 Il2CppClass** typeHierarchy;
 uint32_t cctor_started;
 uint32_t cctor_finished;
 __attribute__((aligned(8))) uint64_t cctor_thread;
 GenericContainerIndex genericContainerIndex;
 CustomAttributeIndex customAttributeIndex;
 uint32_t instance_size;
 uint32_t actualSize;
 uint32_t element_size;
 int32_t native_size;
 uint32_t static_fields_size;
 uint32_t thread_static_fields_size;
 int32_t thread_static_fields_offset;
 uint32_t flags;
 uint32_t token;
 uint16_t method_count;
 uint16_t property_count;
 uint16_t field_count;
 uint16_t event_count;
 uint16_t nested_type_count;
 uint16_t vtable_count;
 uint16_t interfaces_count;
 uint16_t interface_offsets_count;
 uint8_t typeHierarchyDepth;
 uint8_t rank;
 uint8_t minimumAlignment;
 uint8_t packingSize;
 uint8_t valuetype : 1;
 uint8_t initialized : 1;
 uint8_t enumtype : 1;
 uint8_t is_generic : 1;
 uint8_t has_references : 1;
 uint8_t init_pending : 1;
 uint8_t size_inited : 1;
 uint8_t has_finalize : 1;
 uint8_t has_cctor : 1;
 uint8_t is_blittable : 1;
};

typedef struct Il2CppClass_0 {
    const Il2CppImage* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    const Il2CppType* byval_arg;
    const Il2CppType* this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    Il2CppGenericClass * generic_class;
    const Il2CppTypeDefinition* typeDefinition;
    FieldInfo* fields;
    const EventInfo* events;
    const PropertyInfo* properties;
    const MethodInfo** methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
} Il2CppClass_0;

typedef struct Il2CppClass_1 {
    Il2CppClass** typeHierarchy;
    uint32_t cctor_started;
    uint32_t cctor_finished;
#ifdef IS_32BIT
    uint32_t cctor_thread__padding;
    uint32_t cctor_thread;
    uint32_t cctor_thread__hi;
#else
    __attribute__((aligned(8))) uint64_t cctor_thread;
#endif
    GenericContainerIndex genericContainerIndex;
    CustomAttributeIndex customAttributeIndex;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t packingSize;
    uint8_t valuetype : 1;
    uint8_t initialized : 1;
    uint8_t enumtype : 1;
    uint8_t is_generic : 1;
    uint8_t has_references : 1;
    uint8_t init_pending : 1;
    uint8_t size_inited : 1;
    uint8_t has_finalize : 1;
    uint8_t has_cctor : 1;
    uint8_t is_blittable : 1;
} Il2CppClass_1;

typedef struct __attribute__((aligned(8))) Il2CppClass_Merged {
    struct Il2CppClass_0 _0;
    const MethodInfo** vtable;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    void* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    struct Il2CppClass_1 _1;
} Il2CppClass_Merged;

struct Il2CppTypeDefinitionSizes
{
 uint32_t instance_size;
 int32_t native_size;
 uint32_t static_fields_size;
 uint32_t thread_static_fields_size;
};
struct Il2CppDomain
{
 Il2CppAppDomain* domain;
 Il2CppObject* setup;
 Il2CppAppContext* default_context;
 const char* friendly_name;
 uint32_t domain_id;
};
struct Il2CppImage
{
 const char* name;
 AssemblyIndex assemblyIndex;
 TypeDefinitionIndex typeStart;
 uint32_t typeCount;
 MethodIndex entryPointIndex;
 Il2CppNameToTypeDefinitionIndexHashTable* nameToClassHashTable;
 uint32_t token;
};
struct Il2CppMarshalingFunctions
{
 methodPointerType marshal_to_native_func;
 methodPointerType marshal_from_native_func;
 methodPointerType marshal_cleanup_func;
};
struct Il2CppCodeRegistration
{
 uint32_t methodPointersCount;
 const methodPointerType* methodPointers;
 uint32_t delegateWrappersFromNativeToManagedCount;
 const methodPointerType** delegateWrappersFromNativeToManaged;
 uint32_t delegateWrappersFromManagedToNativeCount;
 const methodPointerType* delegateWrappersFromManagedToNative;
 uint32_t marshalingFunctionsCount;
 const Il2CppMarshalingFunctions* marshalingFunctions;
 uint32_t genericMethodPointersCount;
 const methodPointerType* genericMethodPointers;
 uint32_t invokerPointersCount;
 const InvokerMethod* invokerPointers;
 CustomAttributeIndex customAttributeCount;
 const CustomAttributesCacheGenerator* customAttributeGenerators;
};
struct Il2CppMetadataRegistration
{
 int32_t genericClassesCount;
 Il2CppGenericClass* const * genericClasses;
 int32_t genericInstsCount;
 const Il2CppGenericInst* const * genericInsts;
 int32_t genericMethodTableCount;
 const Il2CppGenericMethodFunctionsDefinitions* genericMethodTable;
 int32_t typesCount;
 const Il2CppType* const * types;
 int32_t methodSpecsCount;
 const Il2CppMethodSpec* methodSpecs;
 FieldIndex fieldOffsetsCount;
 const int32_t* fieldOffsets;
 TypeDefinitionIndex typeDefinitionsSizesCount;
 const Il2CppTypeDefinitionSizes* typeDefinitionsSizes;
 const size_t metadataUsagesCount;
 void** const* metadataUsages;
};
struct Il2CppRuntimeStats
{
 uint64_t new_object_count;
 uint64_t initialized_class_count;
 uint64_t method_count;
 uint64_t class_static_data_size;
 uint64_t generic_instance_count;
 uint64_t generic_class_count;
 uint64_t inflated_method_count;
 uint64_t inflated_type_count;
 bool enabled;
};
extern Il2CppRuntimeStats il2cpp_runtime_stats;

struct MonitorData;
struct Il2CppObject {
    struct Il2CppClass *klass;
    struct MonitorData *monitor;
};
typedef int32_t il2cpp_array_lower_bound_t;
struct Il2CppArrayBounds {
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
};
struct Il2CppArray {
    struct Il2CppObject obj;
    struct Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    /* vector must be 8-byte aligned.
       On 64-bit platforms, this happens naturally.
       On 32-bit platforms, obj=8, bounds=4 and max_length=4 so it's also already aligned. */
    void *vector[32];
};
struct Il2CppString {
    struct Il2CppObject object;
    int32_t length;
    uint16_t chars[32];
};