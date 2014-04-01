/* magick/magick_config.h.  work for windows  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if coders and filters are to be built as modules. */
// #define BuildMagickModules 1

/* Disable OpenMP for algorithms which sometimes run slower */
#define DisableSlowOpenMP 1

/* C compiler used for compilation */
#define GM_BUILD_CC "msvs"

/* CFLAGS used for C compilation */
#define GM_BUILD_CFLAGS "/G /O2"

/* arguments passed to configure */
#define GM_BUILD_CONFIGURE_ARGS "./configure  '--without-xml' '--without-x' '--without-ttf'"

/* CPPFLAGS used for preprocessing */
#define GM_BUILD_CPPFLAGS ""

/* C++ compiler used for compilation */
#define GM_BUILD_CXX "cl"

/* CXXFLAGS used for C++ compilation */
#define GM_BUILD_CXXFLAGS "/DWIN32"

/* Host identification triplet */
#define GM_BUILD_HOST "windows-xp"

/* LDFLAGS used for linking */
#define GM_BUILD_LDFLAGS ""

/* LIBS used for linking */
#define GM_BUILD_LIBS "cruntime"

/* Define if C++ compiler supports __func__ */
// #define HAS_CPP__func__ 1
#undef HAS_CPP__func__

/* Define if C compiler supports __func__ */
// #define HAS_C__func__ 1
#undef HAS_C__func__

/* Define to 1 if you have the `argz_add' function. */
#define HAVE_ARGZ_ADD 1

/* Define to 1 if you have the `argz_append' function. */
#define HAVE_ARGZ_APPEND 1

/* Define to 1 if you have the `argz_count' function. */
#define HAVE_ARGZ_COUNT 1

/* Define to 1 if you have the `argz_create_sep' function. */
#define HAVE_ARGZ_CREATE_SEP 1

/* Define to 1 if you have the <argz.h> header file. */
#define HAVE_ARGZ_H 1

/* Define to 1 if you have the `argz_insert' function. */
#define HAVE_ARGZ_INSERT 1

/* Define to 1 if you have the `argz_next' function. */
#define HAVE_ARGZ_NEXT 1

/* Define to 1 if you have the `argz_stringify' function. */
#define HAVE_ARGZ_STRINGIFY 1

/* Define to 1 if you have the `atoll' function. */
#define HAVE_ATOLL 1

/* define if bool is a built-in type */
#define HAVE_BOOL /**/

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* define if the compiler supports const_cast<> */
#define HAVE_CONST_CAST /**/

/* Define to 1 if you have the `ctime_r' function. */
#define HAVE_CTIME_R 1

/* Define to 1 if you have the declaration of `cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define to 1 if you have the declaration of `pread', and to 0 if you don't.
   */
#define HAVE_DECL_PREAD 1

/* Define to 1 if you have the declaration of `pwrite', and to 0 if you don't.
   */
#define HAVE_DECL_PWRITE 1

/* Define to 1 if you have the declaration of `strlcpy', and to 0 if you
   don't. */
// #define HAVE_DECL_STRLCPY 0

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VSNPRINTF 1

/* define if the compiler supports default template parameters */
#define HAVE_DEFAULT_TEMPLATE_PARAMETERS /**/

/* Have a /dev/urandom device for producing random bytes */
// #define HAVE_DEV_URANDOM 1
#undef HAVE_DEV_URANDOM

/* Define to 1 if you have the `directio' function. */
/* #undef HAVE_DIRECTIO */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
// #define HAVE_DIRENT_H 1
#undef HAVE_DIRENT_H

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the `dlerror' function. */
// #define HAVE_DLERROR 1
#undef HAVE_DLERROR

/* Define to 1 if you have the <dlfcn.h> header file. */
// #define HAVE_DLFCN_H 1
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Define to 1 if the system has the type `error_t'. */
#define HAVE_ERROR_T 1

/* define if the compiler supports exceptions */
#define HAVE_EXCEPTIONS /**/

/* define if the compiler supports the explicit keyword */
#define HAVE_EXPLICIT /**/

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the <ft2build.h> header file. */
/* #undef HAVE_FT2BUILD_H */

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* Define to 1 if you have the `getc_unlocked' function. */
#define HAVE_GETC_UNLOCKED 1

/* Define to 1 if you have the `getexecname' function. */
/* #undef HAVE_GETEXECNAME */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the <lcms.h> header file. */
/* #undef HAVE_LCMS_H */

/* Define if you have the <lcms/lcms.h> header file. */
/* #undef HAVE_LCMS_LCMS_H */

/* Define if you have the libdl library or equivalent. */
#define HAVE_LIBDL 1

/* Define if libdlloader will be built on this platform */
#define HAVE_LIBDLLOADER 1

/* Define to 1 if you have the `lltostr' function. */
/* #undef HAVE_LLTOSTR */

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
#define HAVE_LONG_DOUBLE_WIDER 1

/* Define this if a modern libltdl is already installed */
#define HAVE_LTDL 1

/* Define to 1 if you have the <machine/param.h> header file. */
/* #undef HAVE_MACHINE_PARAM_H */

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
/* #undef HAVE_MACH_O_DYLD_H */

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkstemp' function. */
// #define HAVE_MKSTEMP 0

/* Define to 1 if you have a `mmap' system call which handles coherent file
   I/O. */
#define HAVE_MMAP_FILEIO 1

/* define if the compiler supports the mutable keyword */
#define HAVE_MUTABLE /**/

/* define if the compiler implements namespaces */
#define HAVE_NAMESPACES /**/

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* define if the compiler accepts the new for scoping rules */
#define HAVE_NEW_FOR_SCOPING /**/

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if you have the `pclose' function. */
#define HAVE_PCLOSE 1

/* Define to 1 if you have the `poll' function. */
// #define HAVE_POLL 1
#undef HAVE_POLL

/* Define to 1 if you have the `popen' function. */
#define HAVE_POPEN 1

/* Define to 1 if you have the `posix_fadvise' function. */
#define HAVE_POSIX_FADVISE 1

/* Define to 1 if you have the `posix_fallocate' function. */
// #define HAVE_POSIX_FALLOCATE 0

/* Define to 1 if you have the `posix_madvise' function. */
#define HAVE_POSIX_MADVISE 1

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the `pread' function. */
// #define HAVE_PREAD 1
#undef HAVE_PREAD

/* Define if libtool can extract symbol lists from object files. */
#define HAVE_PRELOADED_SYMBOLS 1

/* Define to 1 if you have the <process.h> header file. */
/* #undef HAVE_PROCESS_H */

/* Define if you have POSIX threads libraries and header files. */
// #define HAVE_PTHREAD 1
#undef HAVE_PTHREAD

/* Define to 1 if you have the `putc_unlocked' function. */
#define HAVE_PUTC_UNLOCKED 1

/* Define to 1 if you have the `pwrite' function. */
// #define HAVE_PWRITE 1
#undef HAVE_PWRITE

/* Define to 1 if you have the `qsort_r' function. */
#define HAVE_QSORT_R 1

/* Define to 1 if you have the `raise' function. */
#define HAVE_RAISE 1

/* Define to 1 if you have the `rand_r' function. */
// #define HAVE_RAND_R 0

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the `readdir_r' function. */
#define HAVE_READDIR_R 1

/* Define to 1 if you have the `readlink' function. */
// #define HAVE_READLINK 0

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `seekdir' function. */
#define HAVE_SEEKDIR 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Define to 1 if you have the `sigaction' function. */
// #define HAVE_SIGACTION 1
#undef HAVE_SIGACTION

/* Define to 1 if you have the `sigemptyset' function. */
// #define HAVE_SIGEMPTYSET 1
#undef HAVE_SIGEMPTYSET

/* Define to 1 if you have the `spawnvp' function. */
/* #undef HAVE_SPAWNVP */

/* define if the compiler supports static_cast<> */
#define HAVE_STATIC_CAST /**/

/* define if the compiler supports ISO C++ standard library */
#define HAVE_STD /**/

/* Define to 1 if you have the <stdint.h> header file. */
// #define HAVE_STDINT_H 1
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* define if the compiler supports Standard Template Library */
#define HAVE_STL /**/

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strtoll' function. */
// #define HAVE_STRTOLL 0

/* Define to 1 if you have the `sysconf' function. */
// #define HAVE_SYSCONF 1
#undef HAVE_SYSCONF

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `telldir' function. */
#define HAVE_TELLDIR 1

/* define if the compiler supports basic templates */
#define HAVE_TEMPLATES /**/

/* Define to 1 if you have the `tempnam' function. */
#define HAVE_TEMPNAM 1

/* Define to 1 if you have the <tiffconf.h> header file. */
/* #undef HAVE_TIFFCONF_H */

/* Define to 1 if you have the `TIFFIsCODECConfigured' function. */
/* #undef HAVE_TIFFISCODECCONFIGURED */

/* Define to 1 if you have the `TIFFMergeFieldInfo' function. */
/* #undef HAVE_TIFFMERGEFIELDINFO */

/* Define to 1 if you have the `TIFFSetErrorHandlerExt' function. */
/* #undef HAVE_TIFFSETERRORHANDLEREXT */

/* Define to 1 if you have the `TIFFSetTagExtender' function. */
/* #undef HAVE_TIFFSETTAGEXTENDER */

/* Define to 1 if you have the `TIFFSetWarningHandlerExt' function. */
/* #undef HAVE_TIFFSETWARNINGHANDLEREXT */

/* Define to 1 if you have the `TIFFSwabArrayOfTriples' function. */
/* #undef HAVE_TIFFSWABARRAYOFTRIPLES */

/* Define to 1 if you have the `times' function. */
// #define HAVE_TIMES 1
#undef HAVE_TIMES

/* Define to 1 if you have the `tmpnam_r' function. */
// #define HAVE_TMPNAM_R 1
#undef HAVE_TMPNAM_R

/* Define to 1 if you have the `ulltostr' function. */
/* #undef HAVE_ULLTOSTR */

/* Define to 1 if you have the <unistd.h> header file. */
// #define HAVE_UNISTD_H 1
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `vsprintf' function. */
#define HAVE_VSPRINTF 1

/* This value is set to 1 to indicate that the system argz facility works */
#define HAVE_WORKING_ARGZ 1

/* Define to 1 if you have the `_exit' function. */
#define HAVE__EXIT 1

/* Define to 1 if you have the `_NSGetExecutablePath' function. */
/* #undef HAVE__NSGETEXECUTABLEPATH */

/* Define to 1 if you have the `_pclose' function. */
/* #undef HAVE__PCLOSE */

/* Define to 1 if you have the `_popen' function. */
/* #undef HAVE__POPEN */

/* Define if you have the bzip2 library */
// #define HasBZLIB 1
#undef HasBZLIB // TODO: add bzip2

/* Define if you have Display Postscript */
/* #undef HasDPS */

/* Define if you have FlashPIX library */
/* #undef HasFPX */

/* Define if you have Ghostscript library */
/* #undef HasGS */

/* Define if you have JBIG library */
/* #undef HasJBIG */

/* Define if you have JPEG version 2 "Jasper" library */
/* #undef HasJP2 */

/* Define if you have JPEG library */
#define HasJPEG 1

/* Define if you have LCMS library */
/* #undef HasLCMS */

/* Define if using libltdl to support dynamically loadable modules */
/* #undef HasLTDL */

/* Define if you have PNG library */
#define HasPNG 1

/* X11 server supports shape extension */
/* #undef HasShape */

/* X11 server supports shared memory extension */
/* #undef HasSharedMemory */

/* Define if you have TIFF library */
/* #undef HasTIFF */

/* Define if you have TRIO vsnprintf replacement library */
/* #undef HasTRIO */

/* Define if you have FreeType (TrueType font) library */
/* #undef HasTTF */

/* Define if you have umem memory allocation library */
/* #undef HasUMEM */

/* Define to use the Windows GDI32 library */
/* #undef HasWINGDI32 */

/* Define if you have wmf library */
/* #undef HasWMF */

/* Define if you have wmflite library */
/* #undef HasWMFlite */

/* Define if you have X11 library */
/* #undef HasX11 */

/* Define if you have XML library */
/* #undef HasXML */

/* Define if you have zlib compression library */
#define HasZLIB 1

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the system default library search path. */
#define LT_DLSEARCH_PATH "/lib:/usr/lib:/usr/lib/mesa:/usr/local/lib/glusterfs:/lib/i486-linux-gnu:/usr/lib/i486-linux-gnu:/lib/i686-linux-gnu:/usr/lib/i686-linux-gnu:/usr/lib/alsa-lib:/usr/local/lib:/opt/Ice-3.3.1/lib"

/* The archive extension */
#define LT_LIBEXT "a"

/* Define to the extension used for runtime loadable modules, say, ".so". */
#define LT_MODULE_EXT ".so"

/* Define to the name of the environment variable that determines the run-time
   module search path. */
#define LT_MODULE_PATH_VAR "LD_LIBRARY_PATH"

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to prepend to default font search path. */
/* #undef MAGICK_FONT_PATH */

/* Command which returns total physical memory in bytes */
/* #undef MAGICK_PHYSICAL_MEMORY_COMMAND */

/* define if the compiler lacks ios::binary */
/* #undef MISSING_STD_IOS_BINARY */

/* Directory where executables are installed. */
#define MagickBinPath "/usr/local/bin/"

/* Location of coder modules */
#define MagickCoderModulesPath "/usr/local/lib/GraphicsMagick-1.3.12/modules-Q8/coders/"

/* Subdirectory of lib where coder modules are installed */
#define MagickCoderModulesSubdir "GraphicsMagick-1.3.12/modules-Q8/coders"

/* Location of filter modules */
#define MagickFilterModulesPath "/usr/local/lib/GraphicsMagick-1.3.12/modules-Q8/filters/"

/* Subdirectory of lib where filter modules are installed */
#define MagickFilterModulesSubdir "GraphicsMagick-1.3.12/modules-Q8/filters"

/* Directory where architecture-dependent configuration files live. */
#define MagickLibConfigPath "/usr/local/lib/GraphicsMagick-1.3.12/config/"

/* Subdirectory of lib where architecture-dependent configuration files live.
   */
#define MagickLibConfigSubDir "GraphicsMagick-1.3.12/config"

/* Directory where architecture-dependent files live. */
#define MagickLibPath "/usr/local/lib/GraphicsMagick-1.3.12/"

/* Subdirectory of lib where GraphicsMagick architecture dependent files are
   installed */
#define MagickLibSubdir "GraphicsMagick-1.3.12"

/* Directory where architecture-independent configuration files live. */
#define MagickShareConfigPath "/usr/local/share/GraphicsMagick-1.3.12/config/"

/* Subdirectory of lib where architecture-independent configuration files
   live. */
#define MagickShareConfigSubDir "GraphicsMagick-1.3.12/config"

/* Directory where architecture-independent files live. */
#define MagickSharePath "/usr/local/share/GraphicsMagick-1.3.12/"

/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Prefix Magick library symbols with a common string. */
/* #undef PREFIX_MAGICK_SYMBOLS */

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Number of bits in a pixel Quantum (8/16/32) */
#define QuantumDepth 8

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `signed int', as computed by sizeof. */
#define SIZEOF_SIGNED_INT 4

/* The size of `signed long', as computed by sizeof. */
#define SIZEOF_SIGNED_LONG 4

/* The size of `signed long long', as computed by sizeof. */
#define SIZEOF_SIGNED_LONG_LONG 8

/* The size of `signed short', as computed by sizeof. */
#define SIZEOF_SIGNED_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of `unsigned int*', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INTP 4

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 4

/* The size of `unsigned long long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG_LONG 8

/* The size of `unsigned short', as computed by sizeof. */
#define SIZEOF_UNSIGNED_SHORT 2

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* GraphicsMagick is formally installed under prefix */
// #define UseInstalledMagick 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Location of X11 configure files */
#define X11ConfigurePath "X11ConfigurePath"

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Enable all API extensions (for GNU Linux libc) */
#define _GNU_SOURCE 1

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Enable all API extensions (for NetBSD) */
#define _NETBSD_SOURCE 1

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif

/* Define so that glibc/gnulib argp.h does not typedef error_t. */
/* #undef __error_t_defined */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to a type to use for `error_t' if it is not otherwise available. */
/* #undef error_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
// #define restrict __restrict
#define restrict

/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */