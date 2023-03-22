#pragma once
#include <vector>
#include <string>
#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#endif
using namespace std;
void setwin()
{
	#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	#endif
}
template<typename T>
void runmenu(T& obj)//Приймає клас з методами
{
	
	typedef  void (T::* fptr)();
	struct Punkt
	{
		string val;//Пункт меню
		fptr p;//Пов`язаний з ним метод
	};

	vector<Punkt> vecofvar
	{
		//{ "0 - ", &T::},
		  //{ "1 - ", &T::},
		  //{ "2 - ", &T::}
	};
	cout << "Виберіть варіант:" << endl;
	cout << "Для виходу введіть -1" << endl;
	while (true)
	{
		for (auto it = vecofvar.begin(); it != vecofvar.end(); ++it)
			cout << it->val << endl;
		int key = 0;
		cin >> key;
		try {
			if (key == -1) { break; }
			fptr tempp = vecofvar.at(key).p;
			(obj.*tempp)();
		}
		catch (const std::out_of_range& e) {
			cout << "За межами варіантів вибору!" << endl;
		}
	}
}