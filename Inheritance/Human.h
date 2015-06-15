#pragma once

#include "Mammal.h"
#include <iostream>
using namespace std;


class Human : public Mammal
{ // Data member unique to Human (not found in other Mammals)
	bool civilized;
public:
	Human()
	{
		cout << "A new human is born" << endl;
		speed = 2.0; // change speed. Since derived class ctor
		// (ctor is short for constructor!) runs after base
		// class ctor, initialization sticks initialize member
		// variables specific to this class
		civilized = true;
	}
	~Human()
	{
		cout << "The human has died" << endl;
	}
	virtual void talk() override
	{
		cout << "I'm good looking for a .. human" << endl;
	}
	// implements walking for a human..
	virtual void walk() override
	{
		cout << "Left, right, left, right at the speed of " << speed << endl;
	}
	// member function unique to human derivative
	void attack(Human & other)
	{
		// Human refuses to attack if civilized
		if (civilized)
			cout << "Why would a human attack another? Je refuse" << endl;
		else
			cout << "A human attacks another!" << endl;
	}
};