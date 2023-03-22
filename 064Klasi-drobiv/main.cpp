#include <iostream>
#include "Fraction.h"
#include "Fraction2.h"
#include <memory>
int main() {
  try
  {
     auto ptr = std::make_unique<Fraction>(); 
     printFraction(ptr.get());
  }
  catch (std::exception& e)
  {
    std::cerr << "Вийняток: " << e.what() << '\n';
  }
  auto ptr2 = std::make_unique<Fraction2>();
  printFraction(ptr2.get());
}