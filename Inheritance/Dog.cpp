#include "stdafx.h"
#include "dog.h"

#include <iostream>
using namespace std;

Dog::Dog()
{
	cout << "A dog is born!" << endl;
}
Dog::~Dog()
{
	cout << "The dog died" << endl;
}
void Dog::talk()
{
	cout << "Woof!" << endl; // dogs only say woof!
}
void Dog::walk()
{
	cout << "Left front paw & back right paw, right front paw & back left paw..at the speed of " << speed << endl;
}