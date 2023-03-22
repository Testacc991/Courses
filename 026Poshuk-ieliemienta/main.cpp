//#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;
void showarray(string arr[], int size, string type) {
  cout << type << "Масив символів: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i];
  }
  cout << endl;
}
void showarray(int arr[], int size) {
  cout << "Позиції символу: ";
  for (int i = 0; i < size; i++) {
    if(arr[i]!=0)
    {
    cout << arr[i]<<" ";
    }
  }
}

int main() {
  // SetConsoleCP(1251);
  // SetConsoleOutputCP(1251);
  srand(time(NULL));
  const int elementnumber = 12;
  int num;
  string symbol;
  string symbols[elementnumber];
  for (int i = 0; i < elementnumber; i++) {
    num = rand() % (122 - 97) + 97;
    symbol = static_cast<char>(num);
    symbols[i] = symbol[0];
  }
  showarray(symbols,elementnumber,"");
  cout << "Введіть символ для пошуку" << endl;
  cin >> symbol;
  string *p_symbol = &symbol;
  int pos[elementnumber];
  for (int i = 0; i < elementnumber; i++) {
    if (*(symbols+i)== *p_symbol) {
      *(pos+i) = i+1;
    }
  }
  showarray(pos, elementnumber);  
}