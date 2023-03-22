//#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
  //SetConsoleCP(1251);
  //SetConsoleOutputCP(1251);
  //SetConsoleCP(1251);
  //SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int elementnumber = 12;
	int num;
	char symbol;
	char symbols[elementnumber];
	char arr1[elementnumber / 2];
	char arr2[elementnumber / 2];
	char parr[elementnumber];
	cout << "Початковий масив: ";
	for (int i = 0; i < elementnumber; i++)
	{
		num = rand() % (122 - 97) + 97;
		symbol = static_cast<char>(num);
		symbols[i] = symbol;
		cout << symbol;
	}
	cout << endl;
	char *p_arr1 = arr1;
	char *p_arr2 = arr2;
	char *p_symbols = symbols;
	for (int i = 0; i < elementnumber / 2; i++)
	{
		*(p_arr1 + i) = *(symbols + i * 2);
		*(p_arr2 + i) = *(symbols + ((i * 2 + 1)));
	}
	cout << "непарні символи: ";
	for (int i = 0; i < elementnumber / 2; i++)
	{
		cout << *(p_arr1 + i) << " ";
	}
	cout << endl;
	cout << "парні символи: ";
	for (int i = 0; i < elementnumber / 2; i++)
	{
		cout << *(p_arr2 + i) << " ";
	}
}
