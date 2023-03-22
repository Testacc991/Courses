#include <iostream>
#include <string>
using namespace std;
class IPAdress {
protected:
  string ip;

public:
  IPAdress() {
    cout << "Введіть адресу" << endl;
    cin >> ip;
  }
  IPAdress(IPAdress &source) {}
  virtual void show() { cout << ip << endl; }
};
class IPAddressChecked : public IPAdress {
  int *arr = new int[4];
  void decrypt(string s);
  bool check(int *array);
public:
  IPAddressChecked() : IPAdress() {}
  void show() {
    string result;
    decrypt(ip);
    result = (check(arr)) ? "Правильно" : "Неправильно";
    cout << result << endl;
  }
  IPAddressChecked(IPAddressChecked &source) {}
  ~IPAddressChecked() { delete[] arr; }
};

bool IPAddressChecked::check(int *array) {
  for (int i = 0; i < 4; i++) {
    // cout << *(array + i)<<endl;
    if (*(array + i) > 255 or *(array + i) < 0) {
      return false;
    }
  }
  return true;
}

void IPAddressChecked::decrypt(string s) {

  string delim = ".";
  size_t pos = 0;
  string token;
  int counter = 0;

  while ((pos = s.find(delim)) != std::string::npos) {
    token = s.substr(0, pos);
    *(arr + counter) = stoi(token);
    s.erase(0, pos + delim.length());
    counter++;
  }
  *(arr + 3) = stoi(s);
}
int main() {
    //IPAdress simpleip;
    //simpleip.show();
    IPAddressChecked ipcheck1;
    ipcheck1.show();
    IPAddressChecked ipcheck2;
    ipcheck2.show();
}