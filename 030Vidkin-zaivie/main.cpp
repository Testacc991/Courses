#include <iostream>
//#include <Windows.h>
using namespace std;

string decrypt(int array[6][4], int x, int y)
{
    if (y == 0) {
        if (array[y][x] == 0)
            return "барва  ";
        if (array[y][x] == 1)
            return "Розмір  ";
        if (array[y][x] == 2)
            return "Форма  ";
        if (array[y][x] == 3)
            return "  Рамка";
    }
    if (y > 0) {
        if (x == 0)
        {
            if (array[y][x] == 1)
                return "червона";
            else
                return "зелена ";
        }
        if (x == 1)
        {
            if (array[y][x] == 1)
                return "велика  ";
            else
                return "маленька";
        }
        if (x == 2)
        {
            if (array[y][x] == 1)
                return "квадратна";
            else
                return "кругла   ";
        }
        if (x == 3)
        {
            if (array[y][x] == 1)
                return "є";
            else
                return "нема";
        }
    }
}
int find(int array[6][4])
{
    bool findones = false;
    int zeros = 0;
    int ones = 0;
    int cast[] = { 0,0,0,0 };
    for (int x = 0; x < 4; x++) {
        for (int y = 1; y < 6; y++)
        {
            if (array[y][x] == 1)
            {
                ones += 1;
            }
            else
            {
                zeros += 1;
            }
        }
        (zeros > ones) ? cast[x] = 0 : cast[x] = 1;
        zeros = 0;
        ones = 0;
    } 
    for (int y = 1; y < 6; y++)
    {
        int count = 0;
        for (int x = 0; x < 4; x++)
        {
            if (array[y][x] == cast[x]) { count += 1; }
            if (count == 4) { return y; }
        }
    }
}
int main() {
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    int array[6][4] = {
        {0, 1, 2, 3},
        {1, 1, 1, 1},
        {1, 1, 1, 0},
        {1, 1, 0, 1},
        {0, 1, 1, 1},
        {1, 0, 1, 1},
    };
    for (int y = 0; y < 6; y++)
    {
        cout << y << " ";
        for (int x = 0; x < 4; x++)
        {
            cout << decrypt(array, x, y) << " ";
        }
        cout << endl;
    }
   cout <<"Найбільше спільних властивостей має фігура під номером " << find(array) << endl;
}

