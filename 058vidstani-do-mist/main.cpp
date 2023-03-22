#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, string> Chernivtsi;
  Chernivtsi.insert(pair<string, string>("Вінниця", "312"));
  Chernivtsi.insert(pair<string, string>("Дніпропетровськ", "891"));
  Chernivtsi.insert(pair<string, string>("Донецьк", "1141"));
  Chernivtsi.insert(pair<string, string>("Житомир", "389"));
  Chernivtsi.insert(pair<string, string>("Запоріжжя", "747"));
  Chernivtsi.insert(pair<string, string>("Ів-Франківськ", "143"));
  Chernivtsi.insert(pair<string, string>("Київ", "538"));
  Chernivtsi.insert(pair<string, string>("Луганськ", "1292"));
  Chernivtsi.insert(pair<string, string>("Луцьк", "336"));
  Chernivtsi.insert(pair<string, string>("Львів", "278"));
  Chernivtsi.insert(pair<string, string>("Миколаїв", "515"));
  Chernivtsi.insert(pair<string, string>("Одеса", "389"));
  map<string, string>::iterator it;
  for (it = Chernivtsi.begin(); it != Chernivtsi.end(); it++) {
    cout << it->first << endl;
  }
  string word = "";
  cout << "\nДля виходу введіть 0:" << endl;
  while (true) {
    cout << "Щоб дізнатись відстань від Чернівців введіть назву міста:" << endl;
    cin >> word;
    for (it = Chernivtsi.begin(); it != Chernivtsi.end(); it++) {
      if (it->first == word) {
        cout << it->second << " км" << endl;
      }
    }
    if(word=="0")
    {
      break;
    }
  }
}