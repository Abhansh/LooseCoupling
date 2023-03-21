#pragma once
#ifdef INTERFACE_EXPORTS
#define INTERFACE_API __declspec(dllexport)
#else
#define INTERFACE_API __declspec(dllimport)
#endif 


class INTERFACE_API IHelloWorld
{
public:
	virtual void greet() = 0;
};

