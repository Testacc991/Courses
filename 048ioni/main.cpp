#include "Ion.h"
#include <iostream>
#include <vector>
#ifdef _WIN32
#include <Windows.h>
#endif
int main()
{
	#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	#endif
	int count = 5;
  cout << "Дані генеруються випадково"<<endl;
	cout << "Заряд - число ліворуч" << endl;
	cout << "Валентність - число праворуч" << endl;
	srand((unsigned int)time(NULL));
	vector<Ion>ions;
	for (int i = 0; i < count; i++)
	{
	ions.push_back(Ion());
	}
	for (int i = 0; i < count; i++)
	{
		for (int v = 0; v < count; v++)
		{
			ions.at(i)=ions.at(v);
		}
	}
}