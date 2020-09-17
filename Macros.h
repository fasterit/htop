#ifndef HEADER_Macros
#define HEADER_Macros

#ifndef MINIMUM
#define MINIMUM(a, b)		((a) < (b) ? (a) : (b))
#endif

#ifndef MAXIMUM
#define MAXIMUM(a, b)		((a) > (b) ? (a) : (b))
#endif

#ifndef CLAMP
#define CLAMP(x, low, high)	(((x) > (high)) ? (high) : MAXIMUM(x, low))
#endif

#ifdef  __GNUC__  // defined by GCC and Clang

#define ATTR_FORMAT(type, index, check) __attribute__((format (type, index, check)))
#define ATTR_NONNULL                    __attribute__((nonnull))
#define ATTR_NORETURN                   __attribute__((noreturn))
#define ATTR_UNUSED                     __attribute__((unused))

#else /* __GNUC__ */

#define ATTR_FORMAT(type, index, check)
#define ATTR_NONNULL
#define ATTR_NORETURN
#define ATTR_UNUSED

#endif /* __GNUC__ */

#endif