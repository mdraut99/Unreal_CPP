#pragma once

#include "Mammal.h"
#include <iostream>
using namespace std;

class Cat : public Mammal
{
public:
	Cat();
	~Cat();
	virtual void talk() override;
	// implements walking for a cat.. same as dog!
	virtual void walk() override;
};