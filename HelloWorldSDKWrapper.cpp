// HelloWorkSDKWrapper.cpp: 定義應用程式的進入點。
//

#include "HelloWorldSDKWrapper.h"

extern "C" {
    HelloWorld* Wrapper_HelloWorld_Create(int size, const char* something) {
        return new HelloWorld(size, std::string(something));
    }

    void Wrapper_HelloWorld_Destroy(HelloWorld* instance) {
        delete instance;
    }

    int Wrapper_HelloWorld_GetSize(HelloWorld* instance) {
        return instance->GetSize();
    }

    const char* Wrapper_HelloWorld_GetSomething(HelloWorld* instance) {
        static std::string str = instance->GetSomthing();
        return str.c_str();
    }
}
