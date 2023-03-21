#pragma once
#ifdef AIRTELSERVICE_EXPORTS
#define AIRTELSERVICE_API __declspec(dllexport)
#else
#define AIRTELSERVICE_API __declspec(dllimport)
#endif 

#include "IHelloWorld.h"

class AIRTELSERVICE_API Airtel :
    public IHelloWorld
{
public:
    void greet();
};

