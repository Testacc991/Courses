#include <bitset>
#include <iostream>

using namespace std;
int main() {
  unsigned short prava = 8;
  unsigned char rezultat = 0;
  unsigned char maska = 0b100;
  while (prava > 0b111) 
  {
    cout << "Введіть натуральне число від 0 до 7\n";
    cin >> prava;
  }
  rezultat = prava & maska;
  cout << "Маска:      " << bitset<8>(maska) << endl;
  cout << "Права:      " << bitset<8>(prava) << endl;
  cout << "Результат:  " << bitset<8>(rezultat) << endl;
  if (rezultat == 0b100) {
    cout << "Ви маєте права читання файлу.\n";
  } else {
    cout << "У вас нема права читання файлу.\n";
  }
}