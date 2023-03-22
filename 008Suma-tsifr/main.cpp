#include <iostream>
using namespace std;
int main() {
  int chyslo;
  cout << "Введіть шестизначне натуральне число\n";
  cin >> chyslo;
  if (chyslo < 0) {
    cout << "Ви ввели від'ємне число\n";
    return 0;
  }
  if (chyslo >= 100000 && chyslo <= 999999) {
    int a = 0;
    int b = 0;
    int increment = 10;
    for (int i = 1; i < 7; i++) {
      if (i > 3) {
        a = a + chyslo % increment;
        chyslo = chyslo / increment;
      }
      if (i < 4) {
        b = b + chyslo % increment;
        chyslo = chyslo / increment;
      }
    }
    cout << a << "\n";
    cout << b << "\n";
    if (a == b) {
      cout << "Сума перших трьох чисел дорівнює сумі наступних трьох\n";
    } else {
      cout << "Сума перших трьох чисел не дорівнює сумі наступних трьох\n";
    }
  } 
  else 
  {
    cout << "Ви ввели не шестизначне число\n";
  }
}