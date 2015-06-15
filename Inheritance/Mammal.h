// Mammal.h
#pragma once

class Mammal
{
protected:
	int hp;
	double speed;
public:
	Mammal();
	~Mammal();
	void breathe();
	virtual void talk();
	// pure virtual function,
	virtual void walk() = 0;
};