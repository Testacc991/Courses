#include <iostream>
#include <string>
using namespace std;
int main() {
    int chyslo;
    int chyslo2;
    cout << "Введіть число\n";
    cin >> chyslo;
    if (chyslo > 0)
    {
        if (chyslo != 0)
        {
            int increment = 10;
            while (chyslo > 0)
            {
                chyslo2 = chyslo % increment;
                chyslo = chyslo / increment;
                cout << chyslo2;
            }
        }
        else
        {
            cout << chyslo;
        }
    }
    else
    {
        cout << "Ви ввели від'ємне число";
    }
}