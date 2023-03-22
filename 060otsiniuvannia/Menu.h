#pragma once
#include <vector>
#include <string>
#include <iostream>
//#include "Windows.h"
using namespace std;

template<typename T>
void runmenu(T& obj)
{
	typedef  void (T::* fptr)();
	struct Punkt
	{
		string val;
		fptr p;
	};
  
	vector<Punkt> vecofvar
	{
	{ "0 - Показати оцінки", &T::showrating},
	{ "1 - Змінити оцінку", &T::changerating},
	{ "2 - Чи допускається нагорода", &T::award}
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