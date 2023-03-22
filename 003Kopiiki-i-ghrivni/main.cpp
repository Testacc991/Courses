#include <iostream>

int main() {
  int grn, coins;
  std::cout << "Введіть кількість гривень\n";
  std::cin >> grn;
  std::cout << "Введіть кількість копійок\n";
  std::cin >> coins;
  int rez = coins/100;
  rez = grn+rez;
  std::cout << "Гривні: " << rez << "\n";
  int rez2 = coins % 100;
  std::cout << "Копійки: " << rez2; 
}