#include "pch.h"
#include "HelloWorldFactory.h"


IHelloWorld* HelloWorldFactory::getHelloWorld(int choice) {
	switch (choice) {
	case 1:
		return new Airtel();
	case 2:
		return new Jio();
	}
}