#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int chyslo = 1;
  int masiv[25];
  bool vyhid = false;
  while (!vyhid) {
    cout << "Введіть кількість елементів для заповнення\n";
    cin >> chyslo;
    cout << "\n";
    if ((chyslo > 0) && (chyslo < 26)) {
      vyhid = true;
    } else {
      cout << "Кількість елементів перевищує розмір масива\n";
    }
  }
  for (int i = 0; i < 25; i++) {
    if (i < chyslo) {
      masiv[i] = pow(2, i);
    }
  }
  for (int i = 0; i < chyslo; i++) {
    if (i < chyslo) {
      cout << masiv[i] << "\n";
    }
  }
}