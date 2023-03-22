// Впорядкування за допомогою вказівників.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <Windows.h>
using namespace std;
int main()
{
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int elementnumber = 32;
	int symbol;
	int symbols[elementnumber];
	for (int i = 0; i < elementnumber; i++)
	{
		symbol = rand() % (122 - 97) + 97;
		symbols[i] = symbol;
	}
  cout<<"Кількість символів: "<< elementnumber<< endl;
	cout << "До перетворення:    ";
	for (int i : symbols)
	{
		cout << static_cast<char>(i);
		//cout << i << " ";
	}
	cout << endl;
	int size = sizeof(symbols) / sizeof(symbols[0]);
	int dodatkova;
	int minimum;
	int* adresa = symbols + 1;
	
	for (int i = 0; i < size - 1; i += 2)
	{
		minimum = *(symbols + i);
		for (int j = i + 2; j < size; j += 2)
		{
			if (*(symbols + j) < minimum)
			{
				minimum = *(symbols + j);
				adresa = (symbols + j);
			}
		}
		dodatkova = *(symbols + i);
		*(symbols + i) = minimum;
		*adresa = dodatkova;
	}
	cout << "Після перетворення: ";
	for (int i : symbols)
	{
		cout << static_cast<char>(i);
		//cout << i << " ";
	}
	cout << endl;
}

