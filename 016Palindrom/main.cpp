#include <iostream>
using namespace std;
int main() { 
  int list[] = {1, 7, 3, 8, 3, 7, 1};
  bool ispalindrome = true;
  int size = sizeof(list) / sizeof(list[0]);
  int chyslo1, chyslo2;
  if (size % 2 == 0) {
    for (int i = 0; i < size / 2; i++) {
      if (list[i] != list[size - i]) {
        ispalindrome = false;
        break;
      }
    }
  }
  if (size % 2 != 0) {
    for (int i = 0; i < size / 2; i++) {
      if (list[i] != list[size - 1 - i]) {
        ispalindrome = false;
        break;
      }
    }
  }
  if (ispalindrome) {
    cout << "Це паліндром\n";
  } else {
    cout << "Це не паліндром\n";
  }
}