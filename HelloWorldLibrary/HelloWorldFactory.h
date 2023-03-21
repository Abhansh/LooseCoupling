#pragma once
#ifdef COMMONHELLOWORLDLIBRARY_EXPORTS
#define COMMONHELLOWORLDLIBRARY_API __declspec(dllexport)
#else
#define COMMONHELLOWORLDLIBRARY_API __declspec(dllimport)
#endif 

#include "IHelloWorld.h"
#include "Jio.h"
#include "Airtel.h"

class COMMONHELLOWORLDLIBRARY_API HelloWorldFactory
{
public:
	IHelloWorld* getHelloWorld(int choice);
};

