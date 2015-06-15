// Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mammal.h"
#include "dog.h"
#include "cat.h"
#include "Human.h"
#include <iostream>
using namespace std;
// This next line says "class Dog inherits from class Mammal"



int main()
{
	Human human;
	human.breathe(); // breathe using Mammal base class functionality
	human.talk();
	human.walk();

	cout << "-------------------------------" << endl;

	Cat cat;
	cat.breathe(); // breathe using Mammal base class functionality
	cat.talk();
	cat.walk();

	cout << "-------------------------------" << endl;

	Dog dog;
	dog.breathe();
	dog.talk();
	dog.walk();
}
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

