#include <iostream>
using namespace std;
class Fraction2 {
private:
  int m_numerator;
  int m_denominator;

public:
  Fraction2() {
    int vvid;
    cout << "Введіть чисельник" << endl;
    cin >> vvid;
    this->m_numerator = vvid;
    while (true) {
      cout << "Введіть знаменник" << endl;
      cin >> vvid;
      if (vvid != 0) {
        this->m_denominator = vvid;
        break;
      }
      else
      {
        cout<<"Знаменник дорівнює 0"<<endl;
      }
    }
  }

  friend std::ostream &operator<<(std::ostream &out, const Fraction2 &f1) {
    out << f1.m_numerator << "/" << f1.m_denominator<<endl;
    return out;
  }
};

void printFraction(const Fraction2 *const ptr) {
  if (ptr)
    std::cout << *ptr;
}