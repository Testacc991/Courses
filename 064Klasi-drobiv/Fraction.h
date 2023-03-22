#include <iostream>
using namespace std;
class Fraction {
private:
  int m_numerator;
  int m_denominator;

public:
  Fraction() {
    int vvid;
    cout << "Введіть чисельник" << endl;
    cin >> vvid;
    this->m_numerator = vvid;
    cout << "Введіть знаменник" << endl;
    cin >> vvid;
    if (vvid == 0)
      throw std::runtime_error("Знаменник є нулем");
    this->m_denominator = vvid;
  }

  friend std::ostream &operator<<(std::ostream &out, const Fraction &f1) {
    out << f1.m_numerator << "/" << f1.m_denominator<<endl;
    return out;
  }
};

void printFraction(const Fraction *const ptr) {
  if (ptr)
    std::cout << *ptr;
}