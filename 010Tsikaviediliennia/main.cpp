#include <iostream>
using namespace std;
int main() {
  float x,rezultat;
  cout << "Введіть число\n";
  cin >> x;
  if (x != 0)
  {
    rezultat = (1/(1/(1/((1/x)+x)+x)+x));
    cout<< "Результат "<< rezultat ;
  } 
  else
  {
    cout<<"На нуль ділити не можна";
  }
}