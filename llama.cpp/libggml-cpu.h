typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef pointer pointer __((offset(0x10)));

typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef struct tinyBLAS<16,float__vector(16),float__vector(16),ggml_bf16_t,ggml_bf16_t,float> tinyBLAS<16,float__vector(16),float__vector(16),ggml_bf16_t,ggml_bf16_t,float>, *PtinyBLAS<16,float__vector(16),float__vector(16),ggml_bf16_t,ggml_bf16_t,float>;

struct tinyBLAS<16,float__vector(16),float__vector(16),ggml_bf16_t,ggml_bf16_t,float> { // PlaceHolder Class Structure
};

typedef struct tinyBLAS_Q0_AVX<block_q5_0,block_q8_0,float> tinyBLAS_Q0_AVX<block_q5_0,block_q8_0,float>, *PtinyBLAS_Q0_AVX<block_q5_0,block_q8_0,float>;

struct tinyBLAS_Q0_AVX<block_q5_0,block_q8_0,float> { // PlaceHolder Class Structure
};

typedef struct tinyBLAS<16,float__vector(16),float__vector(16),float,float,float> tinyBLAS<16,float__vector(16),float__vector(16),float,float,float>, *PtinyBLAS<16,float__vector(16),float__vector(16),float,float,float>;

struct tinyBLAS<16,float__vector(16),float__vector(16),float,float,float> { // PlaceHolder Class Structure
};

typedef struct tinyBLAS_Q0_AVX<block_iq4_nl,block_q8_0,float> tinyBLAS_Q0_AVX<block_iq4_nl,block_q8_0,float>, *PtinyBLAS_Q0_AVX<block_iq4_nl,block_q8_0,float>;

struct tinyBLAS_Q0_AVX<block_iq4_nl,block_q8_0,float> { // PlaceHolder Class Structure
};

typedef struct tinyBLAS<16,float__vector(16),float__vector(16),unsigned_short,unsigned_short,float> tinyBLAS<16,float__vector(16),float__vector(16),unsigned_short,unsigned_short,float>, *PtinyBLAS<16,float__vector(16),float__vector(16),unsigned_short,unsigned_short,float>;

struct tinyBLAS<16,float__vector(16),float__vector(16),unsigned_short,unsigned_short,float> { // PlaceHolder Class Structure
};

typedef struct tinyBLAS_Q0_AVX<block_q8_0,block_q8_0,float> tinyBLAS_Q0_AVX<block_q8_0,block_q8_0,float>, *PtinyBLAS_Q0_AVX<block_q8_0,block_q8_0,float>;

struct tinyBLAS_Q0_AVX<block_q8_0,block_q8_0,float> { // PlaceHolder Class Structure
};

typedef struct tinyBLAS_Q0_AVX<block_q4_0,block_q8_0,float> tinyBLAS_Q0_AVX<block_q4_0,block_q8_0,float>, *PtinyBLAS_Q0_AVX<block_q4_0,block_q8_0,float>;

struct tinyBLAS_Q0_AVX<block_q4_0,block_q8_0,float> { // PlaceHolder Class Structure
};

typedef struct stat stat, *Pstat;

typedef ulong __dev_t;

typedef ulong __ino_t;

typedef ulong __nlink_t;

typedef uint __mode_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef struct aarch64 aarch64, *Paarch64;

struct aarch64 { // PlaceHolder Class Structure
};

typedef struct _IO_FILE FILE;

typedef ulong __cpu_mask;

typedef struct cpu_set_t cpu_set_t, *Pcpu_set_t;

struct cpu_set_t {
    __cpu_mask __bits[16];
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef ulong pthread_t;

typedef struct ggml_compute_params ggml_compute_params, *Pggml_compute_params;

struct ggml_compute_params { // PlaceHolder Structure
};

typedef struct ggml_backend ggml_backend, *Pggml_backend;

struct ggml_backend { // PlaceHolder Structure
};

typedef struct ggml_cgraph ggml_cgraph, *Pggml_cgraph;

struct ggml_cgraph { // PlaceHolder Structure
};

typedef struct ggml_backend_buffer ggml_backend_buffer, *Pggml_backend_buffer;

struct ggml_backend_buffer { // PlaceHolder Structure
};

typedef struct ggml_backend_buffer_type ggml_backend_buffer_type, *Pggml_backend_buffer_type;

struct ggml_backend_buffer_type { // PlaceHolder Structure
};

typedef struct ggml_backend_reg ggml_backend_reg, *Pggml_backend_reg;

struct ggml_backend_reg { // PlaceHolder Structure
};

typedef struct ggml_tensor ggml_tensor, *Pggml_tensor;

struct ggml_tensor { // PlaceHolder Structure
};

typedef struct ggml_backend_device ggml_backend_device, *Pggml_backend_device;

struct ggml_backend_device { // PlaceHolder Structure
};

typedef struct ggml_backend_dev_props ggml_backend_dev_props, *Pggml_backend_dev_props;

struct ggml_backend_dev_props { // PlaceHolder Structure
};

typedef struct ggml_backend_feature ggml_backend_feature, *Pggml_backend_feature;

struct ggml_backend_feature { // PlaceHolder Structure
};

typedef struct ggml_backend_cpu_device_context ggml_backend_cpu_device_context, *Pggml_backend_cpu_device_context;

struct ggml_backend_cpu_device_context { // PlaceHolder Structure
};

typedef struct {lambda()#1} {lambda()#1}, *P{lambda()#1};

struct {lambda()#1} { // PlaceHolder Structure
};

typedef struct vector<ggml_backend_feature,std::allocator<ggml_backend_feature>> vector<ggml_backend_feature,std::allocator<ggml_backend_feature>>, *Pvector<ggml_backend_feature,std::allocator<ggml_backend_feature>>;

struct vector<ggml_backend_feature,std::allocator<ggml_backend_feature>> { // PlaceHolder Structure
};

typedef struct vector<ggml_backend_buffer_type*,std::allocator<ggml_backend_buffer_type*>> vector<ggml_backend_buffer_type*,std::allocator<ggml_backend_buffer_type*>>, *Pvector<ggml_backend_buffer_type*,std::allocator<ggml_backend_buffer_type*>>;

struct vector<ggml_backend_buffer_type*,std::allocator<ggml_backend_buffer_type*>> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/__cxx11/string - /string

typedef undefined __normal_iterator;

typedef struct extra_buffer_type extra_buffer_type, *Pextra_buffer_type;

struct extra_buffer_type { // PlaceHolder Structure
};

typedef struct tensor_traits tensor_traits, *Ptensor_traits;

struct tensor_traits { // PlaceHolder Structure
};

typedef struct tensor_traits<block_q4_0,8l,4l,(ggml_type)8> tensor_traits<block_q4_0,8l,4l,(ggml_type)8>, *Ptensor_traits<block_q4_0,8l,4l,(ggml_type)8>;

struct tensor_traits<block_q4_0,8l,4l,(ggml_type)8> { // PlaceHolder Structure
};

typedef struct tensor_traits<block_q4_K,8l,8l,(ggml_type)15> tensor_traits<block_q4_K,8l,8l,(ggml_type)15>, *Ptensor_traits<block_q4_K,8l,8l,(ggml_type)15>;

struct tensor_traits<block_q4_K,8l,8l,(ggml_type)15> { // PlaceHolder Structure
};

typedef struct tensor_traits<block_q4_0,4l,4l,(ggml_type)8> tensor_traits<block_q4_0,4l,4l,(ggml_type)8>, *Ptensor_traits<block_q4_0,4l,4l,(ggml_type)8>;

struct tensor_traits<block_q4_0,4l,4l,(ggml_type)8> { // PlaceHolder Structure
};

typedef struct tensor_traits<block_q4_0,8l,8l,(ggml_type)8> tensor_traits<block_q4_0,8l,8l,(ggml_type)8>, *Ptensor_traits<block_q4_0,8l,8l,(ggml_type)8>;

struct tensor_traits<block_q4_0,8l,8l,(ggml_type)8> { // PlaceHolder Structure
};

typedef struct tensor_traits<block_iq4_nl,4l,4l,(ggml_type)8> tensor_traits<block_iq4_nl,4l,4l,(ggml_type)8>, *Ptensor_traits<block_iq4_nl,4l,4l,(ggml_type)8>;

struct tensor_traits<block_iq4_nl,4l,4l,(ggml_type)8> { // PlaceHolder Structure
};

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx);
void FUN_0010a020(void);
void __cxa_finalize(void);
bool ggml_is_numa(void);
void ggml_threadpool_free(long param_1);
void __thiscall std::vector<>::~vector(vector<> *this);
void __thiscall std::vector<>::~vector(vector<> *this);
void ggml_is_contiguous_1(void);
void * operator.new[](ulong param_1);
void ggml_compute_forward_count_equal(void);
void ggml_barrier(long param_1);
void ggml_is_empty(void);
void ggml_compute_forward_set(void);
void ggml_compute_forward_tanh(void);
void ggml_compute_forward_soft_max(void);
int isspace(int param_1);
void ggml_compute_forward_get_rows(void);
void ggml_n_dims(void);
void ggml_nbytes(void);
void quantize_row_q6_K_ref(void);
void ggml_compute_forward_dup(void);
undefined1 * ggml_get_type_traits_cpu(uint param_1);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
ulong ggml_get_f32_nd(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);
void ggml_compute_forward_ssm_scan(void);
void ggml_compute_forward_rwkv_wkv7(void);
void ggml_is_contiguous_channels(void);
void ggml_free(void);
undefined8 ggml_cpu_has_matmul_int8(void);
void GOMP_single_start(void);
void __thiscall ggml::cpu::extra_buffer_type::~extra_buffer_type(extra_buffer_type *this);
undefined1 * ggml_backend_cpu_get_extra_buffers_type(void);
undefined8 ggml_cpu_has_avx(void);
undefined8 ggml_cpu_has_vsx(void);
undefined8 ggml_cpu_has_arm_fma(void);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
undefined8 ggml_cpu_has_avx2(void);
void __thiscall std::vector<>::_M_realloc_insert<>(vector<> *this,void *param_2,undefined8 *param_3);
void ggml_is_contiguous(void);
void ggml_backend_buft_alloc_buffer(void);
void ggml_vec_dot_f16(void);
char * strerror(int __errnum);
void ggml_compute_forward_relu(void);
char * strchr(char *__s,int __c);
void ggml_compute_forward_log(void);
undefined8 ggml_cpu_has_vxe(void);
undefined1 * ggml_backend_cpu_reg(void);
void ggml_vec_soft_max_f32(void);
void ggml_cpu_extra_compute_forward(void);
int ggml::cpu::aarch64::repack<>(ggml_tensor *param_1,void *param_2,ulong param_3);
void sincosf(float __x,float *__sinx,float *__cosx);
size_t strlen(char *__s);
void ggml_compute_forward_view(void);
undefined8 ggml_cpu_has_f16c(void);
int __thiscall ggml::cpu::aarch64::repack<>(aarch64 *this,ggml_tensor *param_1,void *param_2,ulong param_3);
void ggml_compute_forward_conv_2d_dw(void);
void ggml_compute_forward_sgn(void);
void ggml_set_f32_nd(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);
void ggml_compute_forward_timestep_embedding(void);
void ggml_log_internal(void);
void ggml_compute_forward_add_rel_pos(void);
undefined8 ggml_cpu_has_wasm_simd(void);
void ggml_compute_forward_sum_rows(void);
int ggml::cpu::aarch64::repack<>(ggml_tensor *param_1,void *param_2,ulong param_3);
void ggml_aligned_malloc(void);
void ggml_compute_forward_sqr(void);
void std::__throw_length_error(char *param_1);
undefined8 ggml_cpu_has_amx_int8(void);
uint * ggml_set_f32(float param_1,uint *param_2);
void ggml_compute_forward_norm(void);
void * memset(void *__s,int __c,size_t __n);
void __thiscall std::vector<>::_M_realloc_insert<>(vector<> *this,void *param_2,undefined8 *param_3);
void ggml_aligned_free(void);
void ggml_compute_forward_map_custom3(void);
void ggml_compute_forward_custom(void);
void ggml_is_quantized(void);
void ggml_compute_forward_leaky_relu(void);
void ggml_compute_forward_diag_mask_inf(void);
void ggml_compute_forward_rope(void);
void __snprintf_chk(void);
void ggml_compute_forward_win_unpart(void);
void __cxa_guard_abort(void);
void __cxa_guard_release(void);
long sysconf(int __name);
void quantize_row_iq4_nl_ref(void);
void ggml_compute_forward_abs(void);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
undefined8 ggml_set_i32_nd(uint *param_1,int param_2,int param_3,int param_4,int param_5,float param_6);
void ggml_compute_forward_flash_attn_ext(void);
void ggml_compute_forward_mean(void);
float fminf(float __x,float __y);
void ggml_compute_forward_elu(void);
undefined8 ggml_cpu_has_avx_vnni(void);
void ggml_compute_forward_rms_norm_back(void);
void getcpu(void);
float cosf(float __x);
undefined8 ggml_cpu_has_bmi2(void);
undefined8 ggml_cpu_has_llamafile(void);
undefined8 ggml_cpu_has_ssse3(void);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
undefined8 ggml_cpu_has_neon(void);
undefined8 ggml_cpu_has_fp16_va(void);
undefined8 ggml_cpu_has_avx512_vnni(void);
ulong ggml_get_i32_nd(uint *param_1,int param_2,int param_3,int param_4,int param_5);
void ggml_compute_forward_cross_entropy_loss(void);
void ggml_unravel_index(void);
void __thiscall ggml::cpu::extra_buffer_type::~extra_buffer_type(extra_buffer_type *this);
void * memcpy(void *__dest,void *__src,size_t __n);
void quantize_row_q8_K_ref(void);
float sinf(float __x);
void ggml_compute_forward_conv_transpose_2d(void);
void ggml_compute_forward_out_prod(void);
void ggml_new_buffer(void);
undefined8 ggml_cpu_has_sme(void);
void ggml_compute_forward_sum(void);
void ggml_guid_matches(void);
cpu_set_t * __sched_cpualloc(size_t __count);
void __cxa_atexit(void);
pthread_t pthread_self(void);
int stat(char *__file,stat *__buf);
void ggml_threadpool_pause(void);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void quantize_iq4_xs(void);
void ggml_init(void);
void ggml_compute_forward_argsort(void);
undefined8 ggml_backend_is_cpu(undefined8 *param_1);
uint * ggml_set_i32(uint *param_1,int param_2);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml_quantize_mat_t<>(float *param_1,void *param_2,long param_3,long param_4);
void ggml_type_name(void);
void ggml_cpu_extra_work_size(void);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml_type_size(void);
int fclose(FILE *__stream);
void * operator.new(ulong param_1);
void ggml_compute_forward_group_norm(void);
void ggml_compute_forward_pool_1d(void);
void ggml_compute_forward_sigmoid(void);
void operator.delete(void *param_1,ulong param_2);
void ggml_nelements(void);
float roundf(float __x);
void ggml_compute_forward_rope_back(void);
void ggml_compute_forward_argmax(void);
void ggml_get_unary_op(void);
void ggml_compute_forward_map_custom1(void);
void ggml_element_size(void);
int putenv(char *__string);
void ggml_backend_buft_is_host(void);
void ggml_compute_forward_silu_back(void);
void quantize_row_q5_K_ref(void);
void ggml_compute_forward_mul(void);
void ggml_compute_forward_permute(void);
void ggml_compute_forward_sin(void);
void __stack_chk_fail(void);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml_compute_forward_cos(void);
void ggml_op_name(void);
undefined8 ggml_cpu_has_sse3(void);
float fmaxf(float __x,float __y);
void ggml_get_no_alloc(void);
void ggml_compute_forward_acc(void);
void ggml_nrows(void);
void ggml_compute_forward_diag_mask_zero(void);
void ggml_vec_silu_f32(void);
void std::__cxx11::string::_M_construct(ulong param_1,char param_2);
void ggml_rope_yarn_corr_dims(void);
FILE * fopen(char *__filename,char *__modes);
void ggml_compute_forward_unary(void);
undefined8 ggml_cpu_has_sve(void);
void quantize_row_q4_0_ref(void);
void __thiscall ggml_backend_cpu_device_context::ggml_backend_cpu_device_context(ggml_backend_cpu_device_context *this);
char * getenv(char *__name);
void ggml_compute_forward_cont(void);
void std::__cxx11::string::_M_dispose(void);
void ggml_compute_forward_im2col_back_f32(void);
void ggml_compute_forward_hardswish(void);
void ggml_quantize_mat_t<>(float *param_1,void *param_2,long param_3,long param_4);
void operator.delete[](void *param_1);
void ggml_backend_cpu_buffer_type(void);
void ggml_can_repeat(void);
void ggml_compute_forward_map_custom2(void);
void ggml_quantize_mat_t<>(float *param_1,void *param_2,long param_3,long param_4);
void ggml_compute_forward_reshape(void);
void quantize_row_q3_K_ref(void);
void ggml_compute_forward_win_part(void);
void ggml_compute_forward_div(void);
void ggml_compute_forward_rwkv_wkv6(void);
void ggml_cpu_fp16_to_fp32(long param_1,long param_2,long param_3);
void ggml_cpu_init(void);
void FUN_0010bda0(void);
float log1pf(float __x);
int strcmp(char *__s1,char *__s2);
void __sched_cpufree(cpu_set_t *__set);
void ggml_compute_forward_cross_entropy_loss_back(void);
void ggml_compute_forward_scale(void);
void ggml_compute_forward_transpose(void);
void ggml_row_size(void);
void __thiscall ggml::cpu::tensor_traits::~tensor_traits(tensor_traits *this);
void ggml_compute_forward_concat(void);
void ggml_compute_forward_upscale(void);
void ggml_compute_forward_ssm_conv(void);
undefined8 ggml_cpu_has_dotprod(void);
void quantize_row_q5_1_ref(void);
int ggml::cpu::aarch64::repack<>(ggml_tensor *param_1,void *param_2,ulong param_3);
void GOMP_parallel(void);
undefined8 * ggml_backend_cpu_init(void);
void ggml_compute_forward_conv_transpose_1d(void);
float erff(float param_1);
void std::__cxx11::string::_M_replace(ulong param_1,ulong param_2,char *param_3,ulong param_4);
void llamafile_sgemm(void);
void ggml_compute_forward_clamp(void);
float powf(float __x,float __y);
char * fgets(char *__s,int __n,FILE *__stream);
void ggml_vec_log_soft_max_f32(void);
float tanhf(float __x);
void ggml_backend_cpu_aarch64_buffer_type(void);
void ggml_compute_forward_gla(void);
void ggml_compute_forward_repeat_back(void);
undefined8 ggml_cpu_has_avx512_bf16(void);
void ggml_blck_size(void);
void omp_get_thread_num(void);
void ggml_compute_forward_exp(void);
void * memmove(void *__dest,void *__src,size_t __n);
void ggml_compute_forward_neg(void);
void ggml_critical_section_end(void);
void __fprintf_chk(void);
void quantize_row_q4_1_ref(void);
void ggml_compute_forward_pad(void);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
float expf(float __x);
void ggml_vec_dot_f32(void);
void ggml_get_data_f32(void);
void ggml_compute_forward_cpy(void);
void ggml_compute_forward_add_non_quantized(void);
void ggml_compute_forward_pool_2d(void);
void ggml_compute_forward_im2col(void);
void ggml_are_same_shape(void);
void ggml_compute_forward_diag(void);
void ggml_abort(void);
void ggml_compute_forward_add(void);
void ggml_is_scalar(void);
void ggml_cpu_bf16_to_fp32(long param_1,long param_2,long param_3);
void ggml_backend_reg_dev_get(void);
undefined8 ggml_cpu_has_riscv_v(void);
void ggml_compute_forward_soft_max_ext_back(void);
float expm1f(float __x);
void ggml_critical_section_start(void);
int pthread_setaffinity_np(pthread_t __th,size_t __cpusetsize,cpu_set_t *__cpuset);
void ggml_time_us(void);
void _Unwind_Resume(void);
void ggml_compute_forward_sub(void);
void quantize_row_q5_0_ref(void);
void ggml_compute_forward_rms_norm(void);
double log2(double __x);
int pthread_getaffinity_np(pthread_t __th,size_t __cpusetsize,cpu_set_t *__cpuset);
void GOMP_barrier(void);
void quantize_row_tq1_0_ref(void);
void __cxa_guard_acquire(void);
void ggml_compute_forward_pad_reflect_1d(void);
float sqrtf(float __x);
void ggml_compute_forward_get_rel_pos(void);
void ggml_compute_forward_get_rows_back(void);
undefined8 ggml_cpu_get_sve_cnt(void);
void __thiscall ggml::cpu::tensor_traits::~tensor_traits(tensor_traits *this);
undefined8 ggml_cpu_has_avx512_vbmi(void);
void ggml_compute_forward_add1(void);
void ggml_compute_forward_pool_2d_back(void);
void ggml_compute_forward_repeat(void);
ulong * ggml_graph_plan(ulong *param_1,long param_2,int param_3,ulong param_4);
float logf(float __x);
void ggml_compute_forward_l2_norm(void);
void omp_get_num_threads(void);
void quantize_row_q2_K_ref(void);
void ggml_get_type_traits(void);
void ggml_compute_forward_sqrt(void);
void quantize_row_tq2_0_ref(void);
int __thiscall ggml::cpu::aarch64::repack<>(aarch64 *this,ggml_tensor *param_1,void *param_2,ulong param_3);
void quantize_row_q4_K_ref(void);
void ggml_compute_forward_step(void);
void ggml_compute_forward_hardsigmoid(void);
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);
void ggml_compute_forward_arange(void);
void ggml_compute_forward_flash_attn_back(void);
void ggml_threadpool_params_default(void);
undefined4 ggml_graph_compute(ulong param_1,long *param_2);
void ggml_new_tensor_1d(void);
void ggml_backend_cpu_buffer_from_ptr(void);
undefined8 ggml_cpu_has_avx512(void);
undefined8 FUN_0010c3d0(void);
void ggml_backend_cpu_reg_get_device(ggml_backend_reg *param_1,ulong param_2);
void ggml_backend_cpu_init.cold(void);
void ggml_backend_cpu_get_extra_buffers_type(void);
void __thiscall ggml_backend_cpu_get_features(ggml_backend_reg*)::{lambda()#1}::operator()({lambda()#1} *this);
void ggml_backend_cpu_get_features(ggml_backend_reg *param_1);
void ggml_backend_cpu_aarch64_buffer_type(void);
void _GLOBAL__sub_I_ggml_cpu_aarch64.cpp(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void ggml_cpu_fp32_to_bf16(undefined1 (*param_1) [32],ushort *param_2,long param_3);
long ggml_threadpool_new_impl(long param_1,ulong param_2,undefined8 param_3);
void ggml_cpu_fp32_to_fp16(long param_1,long param_2,long param_3);
undefined1 * ggml_get_type_traits_cpu(uint param_1);
void ggml_barrier(long param_1);
bool ggml_is_numa(void);
void ggml_numa_init(undefined4 param_1);
void ggml_graph_compute_thread.isra.0(long *param_1);
void ggml_graph_compute._omp_fn.0(long *param_1);
uint * ggml_set_i32(uint *param_1,int param_2);
undefined8 ggml_new_i32(undefined8 param_1,undefined4 param_2);
uint * ggml_set_f32(float param_1,uint *param_2);
undefined8 ggml_new_f32(undefined4 param_1,undefined8 param_2);
ulong ggml_get_i32_nd(uint *param_1,int param_2,int param_3,int param_4,int param_5);
ulong ggml_get_i32_1d(undefined4 *param_1,int param_2);
undefined8 ggml_set_i32_nd(uint *param_1,int param_2,int param_3,int param_4,int param_5,float param_6);
void ggml_set_i32_1d(uint *param_1,int param_2,int param_3);
ulong ggml_get_f32_nd(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);
ulong ggml_get_f32_1d(uint *param_1,int param_2);
void ggml_set_f32_nd(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);
void ggml_set_f32_1d(float param_1,undefined4 *param_2,int param_3);
void ggml_threadpool_free(long param_1);
void ggml_threadpool_pause(void);
void ggml_threadpool_resume(void);
ulong * ggml_graph_plan(ulong *param_1,long param_2,int param_3,ulong param_4);
void ggml_threadpool_new(undefined8 param_1);
void ggml_cpu_fp16_to_fp32(long param_1,long param_2,long param_3);
void ggml_cpu_bf16_to_fp32(long param_1,long param_2,long param_3);
undefined8 ggml_cpu_has_avx(void);
undefined8 ggml_cpu_has_avx_vnni(void);
undefined8 ggml_cpu_has_avx2(void);
undefined8 ggml_cpu_has_avx512(void);
undefined8 ggml_cpu_has_avx512_vbmi(void);
undefined8 ggml_cpu_has_avx512_vnni(void);
undefined8 ggml_cpu_has_avx512_bf16(void);
undefined8 ggml_cpu_has_amx_int8(void);
undefined8 ggml_cpu_has_bmi2(void);
undefined8 ggml_cpu_has_fma(void);
undefined8 ggml_cpu_has_arm_fma(void);
undefined8 ggml_cpu_has_riscv_v(void);
undefined8 ggml_cpu_has_f16c(void);
undefined8 ggml_cpu_has_fp16_va(void);
undefined8 ggml_cpu_has_wasm_simd(void);
undefined8 ggml_cpu_has_llamafile(void);
undefined8 ggml_cpu_has_sse3(void);
undefined8 ggml_cpu_has_ssse3(void);
undefined8 ggml_cpu_has_vsx(void);
undefined8 ggml_cpu_has_vxe(void);
undefined8 ggml_cpu_has_neon(void);
undefined8 ggml_cpu_has_dotprod(void);
undefined8 ggml_cpu_has_sve(void);
undefined8 ggml_cpu_has_matmul_int8(void);
undefined8 ggml_cpu_get_sve_cnt(void);
undefined8 ggml_cpu_has_sme(void);
void ggml_cpu_init(void);
undefined4 ggml_graph_compute(ulong param_1,long *param_2);
void ggml_graph_compute_with_ctx(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined * ggml_backend_cpu_get_name(ggml_backend *param_1);
undefined8 ggml_backend_cpu_device_get_description(ggml_backend_device *param_1);
undefined8 ggml_backend_cpu_device_get_type(ggml_backend_device *param_1);
undefined8 ggml_backend_cpu_reg_get_device_count(ggml_backend_reg *param_1);
void ggml_backend_cpu_graph_plan_free(ggml_backend *param_1,void *param_2);
void ggml_backend_cpu_free(ggml_backend *param_1);
ulong * ggml_backend_cpu_graph_plan_create(ggml_backend *param_1,ggml_cgraph *param_2);
void ggml_backend_cpu_graph_compute(ggml_backend *param_1,ggml_cgraph *param_2);
void ggml_backend_cpu_graph_plan_compute(ggml_backend *param_1,void *param_2);
void ggml_backend_cpu_device_buffer_from_host_ptr(ggml_backend_device *param_1,void *param_2,ulong param_3,ulong param_4);
void ggml_backend_cpu_device_get_buffer_type(ggml_backend_device *param_1);
void ggml_backend_cpu_device_get_memory(ggml_backend_device *param_1,ulong *param_2,ulong *param_3);
long ggml_backend_cpu_device_get_props(ggml_backend_device *param_1,ggml_backend_dev_props *param_2);
code * ggml_backend_cpu_get_proc_address(ggml_backend_reg *param_1,char *param_2);
undefined * ggml_backend_cpu_device_get_name(ggml_backend_device *param_1);
undefined * ggml_backend_cpu_reg_get_name(ggml_backend_reg *param_1);
undefined8 ggml_backend_is_cpu(undefined8 *param_1);
void ggml_backend_cpu_set_n_threads(long param_1,undefined4 param_2);
void ggml_backend_cpu_set_threadpool(long param_1,long param_2);
void ggml_backend_cpu_set_abort_callback(long param_1,undefined8 param_2,undefined8 param_3);
undefined1 * ggml_backend_cpu_reg_get_device(ggml_backend_reg *param_1,ulong param_2);
undefined1 * ggml_backend_cpu_reg(void);
undefined8 * ggml_backend_cpu_init(void);
void ggml_backend_cpu_device_init_backend(ggml_backend_device *param_1,char *param_2);
undefined1 * ggml_backend_cpu_get_extra_buffers_type(void);
undefined8 ggml_backend_cpu_device_get_extra_buffers_type(ggml_backend_device *param_1);
ulong ggml_backend_cpu_device_supports_buft(ggml_backend_device *param_1,ggml_backend_buffer_type *param_2);
ulong ggml_backend_cpu_device_supports_op(ggml_backend_device *param_1,ggml_tensor *param_2);
{lambda()#1} * __thiscall ggml_backend_cpu_get_features(ggml_backend_reg*)::{lambda()#1}::operator()({lambda()#1} *this);
undefined8 ggml_backend_cpu_get_features(ggml_backend_reg *param_1);
void __thiscall std::vector<>::~vector(vector<> *this);
void __thiscall std::vector<>::~vector(vector<> *this);
void __thiscall ggml_backend_cpu_device_context::~ggml_backend_cpu_device_context(ggml_backend_cpu_device_context *this);
void __thiscall ggml_backend_cpu_device_context::ggml_backend_cpu_device_context(ggml_backend_cpu_device_context *this);
void __thiscall std::vector<>::_M_realloc_insert<>(vector<> *this,void *param_2,undefined8 *param_3);
void __thiscall std::vector<>::_M_realloc_insert<>(vector<> *this,void *param_2,undefined8 *param_3);
char * ggml_backend_cpu_aarch64_buffer_type_get_name(ggml_backend_buffer_type *param_1);
undefined8 ggml_backend_cpu_aarch64_buffer_type_get_alignment(ggml_backend_buffer_type *param_1);
void ggml_quantize_mat_q8_0_4x4(float *param_1,void *param_2,long param_3);
void ggml_quantize_mat_q8_0_4x8(float *param_1,void *param_2,long param_3);
void ggml_quantize_mat_q8_K_4x8(float *param_1,void *param_2,long param_3);
ulong repack_q4_0_to_q4_0_4_bl(ggml_tensor *param_1,int param_2,void *param_3,ulong param_4);
void ggml_gemm_q4_0_8x8_q8_0(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml_backend_cpu_aarch64_buffer_type_alloc_buffer(ggml_backend_buffer_type *param_1,ulong param_2);
void ggml_gemm_q4_K_8x8_q8_K(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml_backend_cpu_aarch64_buffer_set_tensor(ggml_backend_buffer *param_1,ggml_tensor *param_2,void *param_3,ulong param_4,ulong param_5);
undefined8 repack_q4_K_to_q4_K_8_bl(ggml_tensor *param_1,int param_2,void *param_3,ulong param_4);
undefined8 repack_q4_0_to_q4_0_8_bl(ggml_tensor *param_1,int param_2,void *param_3,ulong param_4);
undefined8 ggml_backend_cpu_aarch64_buffer_init_tensor(ggml_backend_buffer *param_1,ggml_tensor *param_2);
void ggml_quantize_mat_t<>(float *param_1,void *param_2,long param_3,long param_4);
void ggml_quantize_mat_t<>(float *param_1,void *param_2,long param_3,long param_4);
void ggml_quantize_mat_t<>(float *param_1,void *param_2,long param_3,long param_4);
int ggml::cpu::aarch64::repack<>(ggml_tensor *param_1,void *param_2,ulong param_3);
int ggml::cpu::aarch64::repack<>(ggml_tensor *param_1,void *param_2,ulong param_3);
int __thiscall ggml::cpu::aarch64::repack<>(aarch64 *this,ggml_tensor *param_1,void *param_2,ulong param_3);
int __thiscall ggml::cpu::aarch64::repack<>(aarch64 *this,ggml_tensor *param_1,void *param_2,ulong param_3);
int ggml::cpu::aarch64::repack<>(ggml_tensor *param_1,void *param_2,ulong param_3);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemv<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
void ggml::cpu::aarch64::gemm<>(int param_1,float *param_2,ulong param_3,void *param_4,void *param_5,int param_6,int param_7);
undefined1 * ggml_backend_cpu_aarch64_buffer_type(void);
pointer __((offset(0x10))) * ggml_aarch64_get_optimal_repack_type(ggml_tensor *param_1);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::work_size(tensor_traits<> *this,int param_1,ggml_tensor *param_2,ulong *param_3);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::work_size(tensor_traits<> *this,int param_1,ggml_tensor *param_2,ulong *param_3);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::work_size(tensor_traits<> *this,int param_1,ggml_tensor *param_2,ulong *param_3);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::work_size(tensor_traits<> *this,int param_1,ggml_tensor *param_2,ulong *param_3);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::work_size(tensor_traits<> *this,int param_1,ggml_tensor *param_2,ulong *param_3);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::~tensor_traits(tensor_traits<> *this);
void __thiscall ggml::cpu::aarch64::extra_buffer_type::~extra_buffer_type(extra_buffer_type *this);
void __thiscall ggml::cpu::aarch64::extra_buffer_type::~extra_buffer_type(extra_buffer_type *this);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::repack(tensor_traits<> *this,ggml_tensor *param_1,void *param_2,ulong param_3);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::repack(tensor_traits<> *this,ggml_tensor *param_1,void *param_2,ulong param_3);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::repack(tensor_traits<> *this,ggml_tensor *param_1,void *param_2,ulong param_3);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::repack(tensor_traits<> *this,ggml_tensor *param_1,void *param_2,ulong param_3);
void __thiscall ggml::cpu::aarch64::tensor_traits<>::repack(tensor_traits<> *this,ggml_tensor *param_1,void *param_2,ulong param_3);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::compute_forward(tensor_traits<> *this,ggml_compute_params *param_1,ggml_tensor *param_2);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::compute_forward(tensor_traits<> *this,ggml_compute_params *param_1,ggml_tensor *param_2);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::compute_forward(tensor_traits<> *this,ggml_compute_params *param_1,ggml_tensor *param_2);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::compute_forward(tensor_traits<> *this,ggml_compute_params *param_1,ggml_tensor *param_2);
undefined8 __thiscall ggml::cpu::aarch64::tensor_traits<>::compute_forward(tensor_traits<> *this,ggml_compute_params *param_1,ggml_tensor *param_2);
undefined8 __thiscall ggml::cpu::aarch64::extra_buffer_type::get_tensor_traits(extra_buffer_type *this,ggml_tensor *param_1);
undefined4 __thiscall ggml::cpu::aarch64::extra_buffer_type::supports_op(extra_buffer_type *this,ggml_backend_device *param_1,ggml_tensor *param_2);
void quantize_row_q4_0(void);
void quantize_row_q4_1(void);
void quantize_row_q5_0(void);
void quantize_row_q5_1(void);
void quantize_row_q8_0(undefined1 (*param_1) [32],long param_2,long param_3);
void quantize_row_q8_1(undefined1 (*param_1) [32],long param_2,long param_3);
void quantize_row_q2_K(void);
void quantize_row_q3_K(void);
void quantize_row_q4_K(void);
void quantize_row_q5_K(void);
void quantize_row_q6_K(void);
void quantize_row_tq1_0(void);
void quantize_row_tq2_0(void);
void quantize_row_q8_K(void);
void ggml_vec_dot_q4_0_q8_0(int param_1,float *param_2,undefined8 param_3,long param_4,undefined8 param_5,long param_6);
void ggml_vec_dot_q4_1_q8_1(int param_1,float *param_2,undefined8 param_3,long param_4);
void ggml_vec_dot_q5_0_q8_0(int param_1,float *param_2,undefined8 param_3,long param_4,undefined8 param_5,long param_6);
void ggml_vec_dot_q5_1_q8_1(int param_1,float *param_2,undefined8 param_3,long param_4,undefined8 param_5,long param_6);
void ggml_vec_dot_q8_0_q8_0(int param_1,float *param_2,undefined8 param_3,long param_4,undefined8 param_5,long param_6);
void ggml_vec_dot_tq1_0_q8_K(int param_1,float *param_2,undefined8 param_3,undefined1 (*param_4) [32],undefined8 param_5,uint *param_6);
void ggml_vec_dot_tq2_0_q8_K(int param_1,float *param_2,undefined8 param_3,undefined1 (*param_4) [32],undefined8 param_5,float *param_6);
void ggml_vec_dot_q2_K_q8_K(int param_1,float *param_2,undefined8 param_3,undefined1 (*param_4) [16],undefined8 param_5,float *param_6);
void ggml_vec_dot_q3_K_q8_K(int param_1,float *param_2,undefined8 param_3,long param_4,undefined8 param_5,uint *param_6);
void ggml_vec_dot_q4_K_q8_K(int param_1,float *param_2,undefined8 param_3,long param_4,undefined8 param_5,uint *param_6);
void ggml_vec_dot_q5_K_q8_K(int param_1,undefined4 *param_2,undefined8 param_3,long param_4,undefined8 param_5,float *param_6);
void ggml_vec_dot_q6_K_q8_K(int param_1,float *param_2,undefined8 param_3,undefined1 (*param_4) [32],undefined8 param_5,float *param_6);
void ggml_vec_dot_iq2_xxs_q8_K(int param_1,float *param_2,undefined8 param_3,ushort *param_4,undefined8 param_5,float *param_6);
void ggml_vec_dot_iq2_xs_q8_K(int param_1,float *param_2,undefined8 param_3,ushort *param_4,undefined8 param_5,uint *param_6);
void ggml_vec_dot_iq2_s_q8_K(int param_1,float *param_2,undefined8 param_3,ushort *param_4,undefined8 param_5,float *param_6);
void ggml_vec_dot_iq3_xxs_q8_K(int param_1,float *param_2,undefined8 param_3,long param_4,undefined8 param_5,float *param_6);
undefined8 ggml_vec_dot_iq3_s_q8_K(int param_1,float *param_2,undefined8 param_3,long param_4);
void ggml_vec_dot_iq1_s_q8_K(int param_1,float *param_2,undefined8 param_3,ushort *param_4,undefined8 param_5,float *param_6);
void ggml_vec_dot_iq1_m_q8_K(int param_1,undefined4 *param_2,undefined8 param_3,uint *param_4,undefined8 param_5,float *param_6);
void ggml_vec_dot_iq4_nl_q8_0(int param_1,undefined4 *param_2,undefined8 param_3,ushort *param_4,undefined8 param_5,ushort *param_6);
void ggml_vec_dot_iq4_xs_q8_K(int param_1,float *param_2,undefined8 param_3,ushort *param_4,undefined8 param_5,float *param_6);
void quantize_row_iq4_nl(void);
void quantize_row_iq4_xs(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void __thiscall ggml::cpu::tensor_traits::~tensor_traits(tensor_traits *this);
void __thiscall ggml::cpu::tensor_traits::~tensor_traits(tensor_traits *this);
void __thiscall ggml::cpu::extra_buffer_type::~extra_buffer_type(extra_buffer_type *this);
void __thiscall ggml::cpu::extra_buffer_type::~extra_buffer_type(extra_buffer_type *this);
undefined8 ggml_cpu_extra_compute_forward(undefined8 param_1,undefined8 param_2);
undefined8 ggml_cpu_extra_work_size(undefined4 param_1,undefined8 param_2,undefined8 param_3);
void ggml_compute_forward_add_non_quantized(int *param_1,int *param_2);
void ggml_compute_forward_sub(int *param_1,int *param_2);
void ggml_compute_forward_mul(int *param_1,int *param_2);
void ggml_compute_forward_div(int *param_1,int *param_2);
void ggml_compute_forward_abs(int *param_1,int *param_2);
void ggml_compute_forward_sgn(int *param_1,int *param_2);
void ggml_compute_forward_neg(int *param_1,int *param_2);
void ggml_compute_forward_step(int *param_1,int *param_2);
void ggml_compute_forward_tanh(int *param_1,int *param_2);
void ggml_compute_forward_elu(int *param_1,int *param_2);
void ggml_compute_forward_relu(int *param_1,int *param_2);
void ggml_compute_forward_sigmoid(int *param_1,int *param_2);
void ggml_compute_forward_hardsigmoid(int *param_1,int *param_2);
void ggml_compute_forward_exp(int *param_1,int *param_2);
void ggml_compute_forward_hardswish(int *param_1,int *param_2);
void ggml_compute_forward_sqr(int *param_1,int *param_2);
void ggml_compute_forward_sqrt(int *param_1,int *param_2);
void ggml_compute_forward_sin(int *param_1,int *param_2);
void ggml_compute_forward_cos(int *param_1,int *param_2);
void ggml_compute_forward_log(int *param_1,int *param_2);
void ggml_vec_dot_f32(uint param_1,float *param_2,undefined8 param_3,undefined1 (*param_4) [64],undefined8 param_5,undefined1 (*param_6) [64]);
void ggml_vec_dot_bf16(int param_1,float *param_2,undefined8 param_3,long param_4,undefined8 param_5,long param_6);
void ggml_vec_dot_f16(uint param_1,float *param_2,undefined8 param_3,undefined1 (*param_4) [32],undefined8 param_5,undefined1 (*param_6) [32]);
void ggml_vec_silu_f32(int param_1,long param_2,long param_3);
long ggml_vec_soft_max_f32(int param_1,long param_2,long param_3);
double ggml_vec_log_soft_max_f32(float param_1,int param_2,float *param_3,float *param_4);
void ggml_compute_forward_diag_mask_f32(ggml_compute_params *param_1,ggml_tensor *param_2,float param_3);
void ggml_vec_mad_f32_unroll(uint param_1,undefined8 param_2,undefined8 param_3,long param_4);
void ggml_mrope_cache_init(float param_1,float param_2,float param_3,float param_4,int *param_5,bool param_6,float param_7,float *param_8,float *param_9,long param_10,float param_11,float param_12,float *param_13,float param_14,float param_15);
void ggml_compute_forward_rwkv_wkv7_f32(ggml_compute_params *param_1,ggml_tensor *param_2);
void ggml_compute_forward_rope_f32(ggml_compute_params *param_1,ggml_tensor *param_2,bool param_3);
void ggml_compute_forward_rope_f16(ggml_compute_params *param_1,ggml_tensor *param_2,bool param_3);
void ggml_compute_forward_dup(int *param_1,int *param_2);
void ggml_compute_forward_add(int *param_1,undefined4 *param_2);
void ggml_compute_forward_add1(undefined8 param_1,undefined8 param_2,int param_3,int *param_4,uint *param_5);
void ggml_compute_forward_acc(int *param_1,long param_2);
void ggml_compute_forward_sum(int *param_1,long param_2);
void ggml_compute_forward_sum_rows(int *param_1,long param_2);
void ggml_compute_forward_mean(int *param_1,long param_2);
void ggml_compute_forward_argmax(int *param_1,long param_2);
void ggml_compute_forward_count_equal(int *param_1,int *param_2);
void ggml_compute_forward_repeat(int *param_1,long param_2);
void ggml_compute_forward_repeat_back(int *param_1,long param_2);
void ggml_compute_forward_concat(int *param_1,long param_2);
void ggml_compute_forward_leaky_relu(int *param_1,long param_2);
void ggml_compute_forward_silu_back(int *param_1,long param_2);
void ggml_compute_forward_norm(int *param_1,long param_2);
void ggml_compute_forward_rms_norm(int *param_1,long param_2);
void ggml_compute_forward_rms_norm_back(int *param_1,long param_2);
void ggml_compute_forward_group_norm(int *param_1,long param_2);
void ggml_compute_forward_l2_norm(int *param_1,long param_2);
void ggml_compute_forward_out_prod(int *param_1,int *param_2);
void ggml_compute_forward_scale(int *param_1,long param_2);
void ggml_compute_forward_set(int *param_1,long param_2);
void ggml_compute_forward_cpy(void);
void ggml_compute_forward_cont(void);
void ggml_compute_forward_reshape(void);
void ggml_compute_forward_view(void);
void ggml_compute_forward_permute(void);
void ggml_compute_forward_transpose(void);
void ggml_compute_forward_get_rows(int *param_1,long param_2);
void ggml_compute_forward_get_rows_back(int *param_1,long param_2);
void ggml_compute_forward_diag(int *param_1,long param_2);
void ggml_compute_forward_diag_mask_inf(ggml_compute_params *param_1,ggml_tensor *param_2);
void ggml_compute_forward_diag_mask_zero(ggml_compute_params *param_1,ggml_tensor *param_2);
void ggml_compute_forward_soft_max(int *param_1,long param_2);
void ggml_compute_forward_soft_max_ext_back(int *param_1,long param_2);
void ggml_compute_forward_clamp(int *param_1,long param_2);
void ggml_compute_forward_rope(ggml_compute_params *param_1,ggml_tensor *param_2);
void ggml_compute_forward_rope_back(ggml_compute_params *param_1,ggml_tensor *param_2);
void ggml_compute_forward_conv_transpose_1d(int *param_1,int *param_2);
void ggml_compute_forward_im2col(int *param_1,int *param_2);
void ggml_compute_forward_im2col_back_f32(int *param_1,int *param_2);
void ggml_compute_forward_conv_transpose_2d(int *param_1,int *param_2);
void ggml_compute_forward_conv_2d_dw(int *param_1,long param_2);
void ggml_compute_forward_pool_1d(int *param_1,long param_2);
void ggml_compute_forward_pool_2d(int *param_1,long param_2);
void ggml_compute_forward_pool_2d_back(int *param_1,int *param_2);
undefined8 ggml_compute_forward_upscale(int *param_1,long param_2);
void ggml_compute_forward_pad(int *param_1,long param_2);
void ggml_compute_forward_pad_reflect_1d(int *param_1,int *param_2);
void ggml_compute_forward_arange(uint *param_1,uint *param_2,undefined8 param_3,long param_4);
void ggml_compute_forward_timestep_embedding(int *param_1,long param_2);
void ggml_compute_forward_argsort(int *param_1,long param_2);
void ggml_compute_forward_flash_attn_ext(int *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,long param_5,long param_6);
void ggml_compute_forward_flash_attn_back(int *param_1,char param_2,undefined4 *param_3);
void ggml_compute_forward_ssm_conv(int *param_1,long param_2);
void ggml_compute_forward_ssm_scan(int *param_1,long param_2);
void ggml_compute_forward_win_part(undefined8 param_1,long param_2);
void ggml_compute_forward_win_unpart(undefined8 param_1,long param_2);
void ggml_compute_forward_unary(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5);
void ggml_compute_forward_get_rel_pos(undefined8 param_1,long param_2);
void ggml_compute_forward_add_rel_pos(int *param_1,long param_2);
void ggml_compute_forward_rwkv_wkv6(int *param_1,long param_2);
void ggml_compute_forward_gla(int *param_1,long param_2);
void ggml_compute_forward_rwkv_wkv7(uint *param_1,long param_2);
void ggml_compute_forward_map_custom1(undefined4 *param_1,long param_2);
void ggml_compute_forward_map_custom2(undefined8 param_1,long param_2);
void ggml_compute_forward_map_custom3(undefined4 *param_1,long param_2);
void ggml_compute_forward_custom(undefined4 *param_1,long param_2);
void ggml_compute_forward_cross_entropy_loss(int *param_1,int *param_2);
void ggml_compute_forward_cross_entropy_loss_back(int *param_1,long param_2);
void ggml_compute_forward_opt_step_adamw(int *param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,6>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,5>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,4>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,3>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,2>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,6>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,5>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,4>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,3>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,2>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,6>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,5>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,4>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,3>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS<>::gemm_bloc<4,2>(tinyBLAS<> *this,long param_1,long param_2);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<4>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<4>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<4>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<4>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm4xN<1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemmMx4<1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<3,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,3>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<2,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,2>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::gemm<1,1>(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,6,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,5,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,4,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,3,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,4>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,2,2>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,1>(long param_1,long param_2,long param_3);
void (anonymous_namespace)::tinyBLAS<>::gemm<4,1,1>(long param_1,long param_2,long param_3);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::mnpack(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::mnpack(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::mnpack(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
void __thiscall(anonymous_namespace)::tinyBLAS_Q0_AVX<>::mnpack(tinyBLAS_Q0_AVX<> *this,long param_1,long param_2,long param_3,long param_4);
bool llamafile_sgemm(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,undefined8 param_6,ulong param_7,ulong param_8,undefined8 param_9,undefined8 param_10,undefined4 param_11,int param_12,int param_13);
void _fini(void);
undefined ggml_is_contiguous_1();
void * operator.new[](ulong param_1);
undefined ggml_is_empty();
int isspace(int param_1);
undefined ggml_n_dims();
undefined ggml_nbytes();
undefined quantize_row_q6_K_ref();
undefined ggml_is_contiguous_channels();
undefined ggml_free();
undefined GOMP_single_start();
undefined ggml_is_contiguous();
undefined ggml_backend_buft_alloc_buffer();
char * strerror(int __errnum);
char * strchr(char * __s, int __c);
void sincosf(float __x, float * __sinx, float * __cosx);
undefined __cxa_finalize();
size_t strlen(char * __s);
undefined ggml_log_internal();
undefined ggml_aligned_malloc();
undefined __throw_length_error(char * param_1);
void * memset(void * __s, int __c, size_t __n);
undefined ggml_aligned_free();
undefined ggml_is_quantized();
undefined __snprintf_chk();
undefined ~string(string * this);
undefined __cxa_guard_abort();
undefined __cxa_guard_release();
long sysconf(int __name);
undefined quantize_row_iq4_nl_ref();
float fminf(float __x, float __y);
undefined getcpu();
float cosf(float __x);
undefined ggml_unravel_index();
void * memcpy(void * __dest, void * __src, size_t __n);
undefined quantize_row_q8_K_ref();
float sinf(float __x);
undefined ggml_new_buffer();
undefined ggml_guid_matches();
cpu_set_t * __sched_cpualloc(size_t __count);
undefined __cxa_atexit();
pthread_t pthread_self(void);
int stat(char * __file, stat * __buf);
undefined quantize_iq4_xs();
undefined ggml_init();
undefined ggml_type_name();
undefined ggml_type_size();
int fclose(FILE * __stream);
void * operator.new(ulong param_1);
void operator.delete(void * param_1, ulong param_2);
undefined ggml_nelements();
float roundf(float __x);
undefined ggml_get_unary_op();
undefined ggml_element_size();
int putenv(char * __string);
undefined ggml_backend_buft_is_host();
undefined quantize_row_q5_K_ref();
undefined __stack_chk_fail();
undefined ggml_op_name();
float fmaxf(float __x, float __y);
undefined ggml_get_no_alloc();
undefined ggml_nrows();
undefined _M_construct(ulong param_1, char param_2);
undefined ggml_rope_yarn_corr_dims();
FILE * fopen(char * __filename, char * __modes);
undefined quantize_row_q4_0_ref();
char * getenv(char * __name);
undefined _M_dispose(void);
void operator.delete[](void * param_1);
undefined ggml_backend_cpu_buffer_type();
undefined ggml_can_repeat();
undefined quantize_row_q3_K_ref();
float log1pf(float __x);
int strcmp(char * __s1, char * __s2);
void __sched_cpufree(cpu_set_t * __set);
undefined ggml_row_size();
undefined quantize_row_q5_1_ref();
undefined GOMP_parallel();
float erff(float param_1);
undefined _M_replace(ulong param_1, ulong param_2, char * param_3, ulong param_4);
float powf(float __x, float __y);
char * fgets(char * __s, int __n, FILE * __stream);
float tanhf(float __x);
undefined ggml_blck_size();
undefined omp_get_thread_num();
void * memmove(void * __dest, void * __src, size_t __n);
undefined ggml_critical_section_end();
undefined __fprintf_chk();
undefined quantize_row_q4_1_ref();
undefined __gxx_personality_v0();
float expf(float __x);
undefined ggml_get_data_f32();
undefined ggml_are_same_shape();
undefined ggml_abort();
undefined ggml_is_scalar();
undefined ggml_backend_reg_dev_get();
float expm1f(float __x);
undefined ggml_critical_section_start();
int pthread_setaffinity_np(pthread_t __th, size_t __cpusetsize, cpu_set_t * __cpuset);
undefined ggml_time_us();
undefined _ITM_deregisterTMCloneTable();
undefined _Unwind_Resume();
undefined quantize_row_q5_0_ref();
double log2(double __x);
int pthread_getaffinity_np(pthread_t __th, size_t __cpusetsize, cpu_set_t * __cpuset);
undefined GOMP_barrier();
undefined quantize_row_tq1_0_ref();
undefined __cxa_guard_acquire();
float sqrtf(float __x);
float logf(float __x);
undefined omp_get_num_threads();
undefined quantize_row_q2_K_ref();
undefined ggml_get_type_traits();
undefined __gmon_start__();
undefined __cxa_pure_virtual();
undefined _ITM_registerTMCloneTable();
undefined quantize_row_tq2_0_ref();
undefined quantize_row_q4_K_ref();
size_t fwrite(void * __ptr, size_t __size, size_t __n, FILE * __s);
undefined ggml_threadpool_params_default();
undefined ggml_new_tensor_1d();
undefined ggml_backend_cpu_buffer_from_ptr();

