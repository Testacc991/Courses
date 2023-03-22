#include <iomanip>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, string> pairs;
  pairs.insert(pair<string, string>("хороший", "good"));
  pairs.insert(pair<string, string>("яблуко", "apple"));
  pairs.insert(pair<string, string>("автомобіль", "car"));
  pairs.insert(pair<string, string>("чистий", "clean"));
  map<string, string>::iterator it;
  for (it = pairs.begin(); it != pairs.end(); it++) {
    cout << it->first << endl;
  }
  string word = "";
  cout << "\nДля виходу введіть 0:" << endl;
  while (true) {
    cout << "Для перекладу введіть слово :" << endl;
    cin >> word;
    for (it = pairs.begin(); it != pairs.end(); it++) {
      if (it->first == word) {
        cout << it->second << endl;
      }
    }
    if(word=="0")
    {
      break;
    }
  }
}