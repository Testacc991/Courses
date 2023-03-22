#include "classes.h"
using namespace std;
#ifdef _WIN32
#include <Windows.h>
#endif
int main()
{
	#ifdef _WIN32
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
	#endif
	Board board;
	while (true)
	{
		short vybir = 0;
		cout << "Яку фігуру ви хочете створити?" << endl;
		cout << "1 - звичайна" << endl;
		cout << "2 - дамка" << endl;
		cout << "інший ввід - вихід" << endl;
		cin >> vybir;
		board.fillboard();
		board.showboard();
		if (vybir == 1)
		{
			Usual usual;
			board.updateboard(usual);
			board.showboard();
			usual.checkmove();
		}
		else if (vybir == 2)
		{
			Queen queen;
			board.updateboard(queen);
			board.showboard();
			queen.checkmove();
		}
		else
		{
			break;
		}
	}
}