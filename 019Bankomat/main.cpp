#include <iostream>
using namespace std;
int main() {
  int summa = -1;
  while (summa <= 0) {
    cout << "Введіть кількість гривень у вигляді додатнього натурального числа.\n";
    cin >> summa;
    if(summa==0)
    {
       cout << "Ви ввели 0, введіть кількість більше 0\n";
    }
    if(summa<0)
    {
       cout << "Ви ввели від'ємну кількість гривень, введіть кількість більше 0.\n";
    }
  }
  int nominal[] = {3000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
  int kilkist[10];
  int size = sizeof(nominal) / sizeof(nominal[0]);
  for (int i = 0; i < size; i++) {
    kilkist[i] = summa / nominal[i];
    summa = summa % nominal[i];
  }
  for (int i = 0; i < size; i++) {
    if (kilkist[i] > 0) {
      cout << " Номінал: " << nominal[i] << " Кількість: " << kilkist[i]
           << endl;
    }
  }
  return 0;
}