#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

int main() {
  setlocale(LC_ALL, "");
  map <wstring,wstring> pairs;
  pairs.insert(pair<wstring, wstring>(L"хороший", L"good"));
  pairs.insert(pair<wstring, wstring>(L"яблуко", L"apple"));
  pairs.insert(pair<wstring, wstring>(L"автомобіль", L"car"));
  pairs.insert(pair<wstring, wstring>(L"чистий", L"clean"));
  map<wstring, wstring>::iterator it;
  for (it = pairs.begin(); it != pairs.end(); it++) {
    wcout <<left<< setw(10)<< it->first<<" "<< it->second<<endl;
  }
}