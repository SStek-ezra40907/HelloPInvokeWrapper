#pragma once

#include <iostream>
class HelloWorld {
public:
	HelloWorld(int, std::string);
	int GetSize() const;
	std::string GetSomthing() const;
private:
	int size;
	std::string something;
};