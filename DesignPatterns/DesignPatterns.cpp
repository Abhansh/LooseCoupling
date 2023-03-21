// DesignPatterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "HelloWorldFactory.h"
#include "IHelloWorld.h"

int main()
{
    HelloWorldFactory factory;
    IHelloWorld* hw = factory.getHelloWorld(1);
    hw->greet();
    hw = factory.getHelloWorld(2);
    hw->greet();
}
