#include "stdafx.h"
#include "cat.h"

#include <iostream>
using namespace std;

Cat::Cat()
{
	cout << "A Cat is born!" << endl;
}
Cat::~Cat()
{
	cout << "The cat has died" << endl;
}
void Cat::talk()
{
	cout << "Meow!" << endl;
}
void Cat::walk()
{
	cout << "Left front paw & back right paw, right front paw & back left paw..at the speed of " << speed << endl;
}