#pragma once
#include "string"
#include "Good.h"
#include <vector>
using namespace std;
class Shop
{
private:
	string name;
	vector<Good>goods;

	int countItems(string name);
public:
	Shop(string name) : name(name) {};

	void addItems(string name, int price, int number);

	void removeItems(string name, int number);

	void printAll();
};