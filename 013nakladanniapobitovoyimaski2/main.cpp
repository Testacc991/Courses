#include <iostream>
#include <bitset>
using namespace std;
int main() {
  unsigned int adresa = 0;
  unsigned int maska = 128;
  unsigned int rezultat = 0;
  cout << "Введіть октет адреси за протоколом ІР версії 4:\n";
  cin >> adresa;
  while ((adresa < 0) || (adresa > 255)) {
    cout << "Введіть коректне значення від 0 до 255\n";
    cin >> adresa;
  }
  rezultat = adresa & maska;
  cout << "&" <<'\n';
  cout <<"rez:    "<< bitset<8>(rezultat)<< endl;
  cout <<"adr1:   "<< bitset<8>(adresa) << endl;
  cout <<"maska1: "<< bitset<8>(maska) << endl;

  rezultat = adresa | maska;
  cout << "|" <<'\n';
  cout <<"rez:    "<< bitset<8>(rezultat)<< endl;
  cout <<"adr:    "<< bitset<8>(adresa) << endl;
  cout <<"maska1: "<< bitset<8>(maska) << endl;

  cout << "~" <<'\n';
  cout <<"rez:    "<< bitset<8>(~rezultat)<< endl;
  cout <<"adr:    "<< bitset<8>(~adresa) << endl;
  cout <<"maska:  "<< bitset<8>(~maska) << endl;

  rezultat = adresa ^ maska;
  cout << "^" <<'\n';
  cout <<"rez:    "<< bitset<8>(rezultat)<< endl;
  cout <<"adr:    "<< bitset<8>(adresa) << endl;
  cout <<"maska:  "<< bitset<8>(maska) << endl;
  if (rezultat == 0) {
    cout << "В нашій мережі застосована маска 128.\n";
    cout << "Октет адреси підмережі: 0.\n";
  } else if (rezultat == 128) {
    cout << "В нашій мережі застосована маска 128.\n";
    cout << "Октет адреси підмережі: 128.\n";
  }
}