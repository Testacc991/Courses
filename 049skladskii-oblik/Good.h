#pragma once
#include "string"
using namespace std;
class Good
{
	int price;
	string name;
public:
	Good(string name, int price) : price(price), name(name) {}
	string getName()
	{
		return this->name;
	}
	int getPrice()
	{
		return this->price;
	}
};