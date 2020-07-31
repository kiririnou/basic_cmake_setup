#if defined(_MSC_VER)
    //  Microsoft 
    // #define EXPORT __declspec(dllexport)
    // #define IMPORT __declspec(dllimport)
    #ifdef LIB_BUILD_DLL
        #define LIB_API __declspec(dllexport)
    #else
        #define LIB_API __declspec(dllimport)
    #endif
#elif defined(__GNUC__)
    //  GCC
    #if LIB_BUILD_DLL
        #define LIB_API __attribute__((visibility("default")))
        #pragma message ">>>>>>>>>GCC LIB_BUILD_DLL enabled"
    #else
        #define LIB_API
        #pragma message ">>>>>>>>>GCC LIB_BUILD_DLL disabled"
    #endif
#else
    //  do nothing and hope for the best?
    #ifdef LIB_BUILD_DLL
        #define LIB_API
    #else
        #define LIB_API
    #endif
    #pragma warning Unknown dynamic link import/export semantics.
#endif
