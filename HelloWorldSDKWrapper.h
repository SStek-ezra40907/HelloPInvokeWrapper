#ifdef _WIN32
#define API __declspec(dllexport)
#else
#define API
#endif

#include "HelloWorld.h"

extern "C" {
    API HelloWorld* Wrapper_HelloWorld_Create(int size, const char* something);
    API void Wrapper_HelloWorld_Destroy(HelloWorld* instance);
    API int Wrapper_HelloWorld_GetSize(HelloWorld* instance);
    API const char* Wrapper_HelloWorld_GetSomething(HelloWorld* instance);
}