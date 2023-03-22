#include <iostream>
using namespace std;
void vvidchysel(int &a, int &b) {
  cout << "Введіть число а\n";
  cin >> a;
  cout << "Введіть число b\n";
  cin >> b;
}

int main() {
  int vybir = -1;
  int a = 0, b = 0;
  while (vybir != 0) {
    cout << "*** МЕНЮ ***\n";
    cout << "0 - вихід\n";
    cout << "1 - додавання\n";
    cout << "2 - віднімання\n";
    cout << "3 - множення\n";
    cout << "4 - ділення\n";
    cout << "5 - остача\n";
    cin >> vybir;
    switch (vybir) {
    case 0:
      cout << "Ви вийшли з програми\n";
      break;
    case 1:
      vvidchysel(a, b);
      cout << "Результат додавання: " << a + b << "\n";
      break;
    case 2:
      vvidchysel(a, b);
      cout << "Результат віднімання: " << a - b << "\n";
      break;
    case 3:
      vvidchysel(a, b);
      cout << "Результат множення: " << a * b << "\n";
      break;
    case 4:
      vvidchysel(a, b);
      if (b != 0) {
        cout << "Результат ділення: " << a / b << "\n";
      } else {
        cout << "На нуль число не ділиться"
             << "\n";
      }
      break;
    case 5:
      vvidchysel(a, b);
      if (b != 0) {
        cout << "Остача: " << a % b << "\n";
      } else {
        cout << "На нуль число не ділиться"
             << "\n";
      }
      break;
    default:
      cout << "Хибний вибір\n";
      break;
    }
  }
}