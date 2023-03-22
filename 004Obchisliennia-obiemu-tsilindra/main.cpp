#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float diametr, vysota, objem, radius;
  cout << "Введіть діаметр\n";
  cin >> diametr;
 
  cout << "Введіть висоту\n";
  cin >> vysota;
  
  radius = diametr / 2;
  radius = pow(radius, 2);

  objem = M_PI*radius*vysota;
  cout << "Об'єм циліндру: " << objem;
}