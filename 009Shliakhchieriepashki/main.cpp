#include <iomanip>
#include <iostream>
using namespace std;
using meters_t = long;
using sentimeters_t = short;
using days_t = long;
using shlyah_t = long;
int main() {
  days_t days;
  days_t currentday = 1;
  cout << "Введіть кількість днів\n";
  cin >> days;
  if (days > 0) {
    meters_t meters = 0;
    sentimeters_t sentimeters = 0;

    shlyah_t shlyah = 0;
    shlyah_t suma = 150;

    while (currentday <= days) {
      shlyah += suma;
      suma += 20;
      currentday++;
    }
    meters = shlyah / 100;
    sentimeters = shlyah % 100;
    cout << "За " << days << " днів черепаха проповзла " << meters << " метра "
         << sentimeters << " сантиметра";
  } else {
    cout << "Ви ввели від'ємне число або символьні дані або 0";
  }
}