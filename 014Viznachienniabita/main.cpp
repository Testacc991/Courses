#include <iostream>
#include <limits>
using namespace std;
int main() {
  unsigned int vvedene_chyslo = 0;
  unsigned int maska = 1;
  unsigned int rezultat = 0;
  cout << "Введіть натуральне число від 0 до 511:\n";
  cin >> vvedene_chyslo;
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');  
  while ((vvedene_chyslo < 0) || (vvedene_chyslo > 511)) {
    cout << "Введіть коректне значення від 0 до 511\n";
    cin >> vvedene_chyslo;
  }
  cout << "Ви ввели число: " << vvedene_chyslo << "\n";
  rezultat = vvedene_chyslo & maska;
  if (rezultat == 0) {
    cout << "Значення останнього біта: 0.\n";
  } else if (rezultat == 1) {
    cout << "Значнення останнього біта 1.\n";
  }
}