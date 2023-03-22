#pragma once
#include "Shop.h"
#include "Good.h"
#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#endif
int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif
	Shop mainShop = Shop("Novus");
	mainShop.addItems("Kavun", 45, 10);
	mainShop.addItems("Kartoplya", 11, 25);
	mainShop.addItems("Ogirok", 24, 10);
	mainShop.removeItems("Kavun", 2);
	mainShop.removeItems("Kartoplya", 6);
	mainShop.removeItems("Ogirok", 7);
	mainShop.printAll();
}