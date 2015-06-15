#pragma once

#include "Mammal.h"
#include <iostream>
using namespace std;

class Cat : public Mammal
{
public:
	Cat()
	{
		cout << "A cat is born" << endl;
	}
	~Cat()
	{
		cout << "The cat has died" << endl;
	}
	virtual void talk() override
	{
		cout << "Meow!" << endl;
	}
	// implements walking for a cat.. same as dog!
	virtual void walk() override
	{
		cout << "Left front paw & back right paw, right front paw & back left paw..at the speed of " << speed << endl;
	}
};