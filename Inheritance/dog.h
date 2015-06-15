#pragma once

#include "Mammal.h"
#include <iostream>
using namespace std;

class Dog : public Mammal // : is used for inheritance
{
public:
	Dog()
	{
		cout << "A dog is born!" << endl;
	} ~
		Dog()
	{
		cout << "The dog died" << endl;
	}
	virtual void talk() override
	{
		cout << "Woof!" << endl; // dogs only say woof!
	}
	// implements walking for a dog
	virtual void walk() override
	{
		cout << "Left front paw & back right paw, right front paw & back left paw..at the speed of " << speed << endl;
	}
};