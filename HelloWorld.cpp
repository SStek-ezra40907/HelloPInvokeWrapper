// HelloWorldSDK.cpp (C++ SDK implementation)
#include "HelloWorld.h"
#include <iostream>

HelloWorld::HelloWorld(int _size, std::string _something)
{
    size = _size;
    something = _something;
}

int HelloWorld::GetSize() const
{
    return size;
}

std::string HelloWorld::GetSomthing() const
{
    return something;
}
