#include <iostream>
//#include <Windows.h>
void show(char* list, int end)
{
	for (int i = 0; i < end; i++)
	{
		std::cout << *(list + i);
	}
	std::cout<<std::endl;
}
void fill(char* list, int end)
{
	int num;
	char symbol;
	static int memory = 0;
	if (memory < end)
	{
		for (int i = memory; i < end; ++i)
		{
			num = rand() % (122 - 97) + 97;
			symbol = static_cast<char>(num);
			*(list + i) = symbol;
		}
	}
	memory = end;
}
int main()
{
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	int size = 0;
	int size2 = 0;
	srand(time(NULL));
	std::cout << "Введіть розмір масиву:" << std::endl;
	std::cin >> size;
	char* symbols = (char*)calloc(size, sizeof(char));
	fill(symbols, size);
	show(symbols, size);

	std::cout << "Введіть новий розмір:" << std::endl;
	std::cin >> size2;
	symbols = (char*)realloc(symbols, size2 * sizeof(char));
	fill(symbols, size2);
	show(symbols, size2);
  free(symbols);
}