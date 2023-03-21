#pragma once
#ifdef JIOSERVICE_EXPORTS
#define JIOSERVICE_API __declspec(dllexport)
#else
#define JIOSERVICE_API __declspec(dllimport)
#endif 

#include "IHelloWorld.h"

class JIOSERVICE_API Jio :
    public IHelloWorld
{
public:
    void greet();
};

