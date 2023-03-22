#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int stepin, rezultat;
  cout << "Введіть степінь, до якого треба піднести число 2\n";
  cin >> stepin;
  rezultat = pow(2,stepin);
  cout << "2 у степені " << stepin << " = " << rezultat;
}