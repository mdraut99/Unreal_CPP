#pragma once

#include "Mammal.h"
#include <iostream>
using namespace std;

class Dog : public Mammal // : is used for inheritance
{
public:
	Dog();
	~Dog();
	virtual void talk() override;
	// implements walking for a dog
	virtual void walk() override;
};