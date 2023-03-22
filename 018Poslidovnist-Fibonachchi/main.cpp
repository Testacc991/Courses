#include <iostream>
using namespace std;
int main() {
  int fibonacci[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
  float newarray[13];
  for (int i = 0; i < 12; i++) {
    newarray[i] = (float)fibonacci[i + 1] / (float)fibonacci[i];
  }
  for (int i = 0; i < 12; i++) {
    cout << i << ") " << newarray[i] << endl;
  }
  return 0;
}