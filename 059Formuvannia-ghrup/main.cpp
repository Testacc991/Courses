#include "Student.h"
#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
struct byage {
  inline bool operator()(const Student &person1, const Student &person2) {
    return (person1.getage() < person2.getage());
  }
};
struct byinterest {
  inline bool operator()(const Student &person1, const Student &person2) {
    return strcoll(person1.getinterest().c_str(),
                   person2.getinterest().c_str()) < 0;
  }
};
void group(vector<Student> &cont) {
  int next1 = 0;
  cout<<"Групи за віком:"<<endl;
  sort(cont.begin(), cont.end(), byage());
  for (auto it = cont.begin(); it != cont.end(); it++) 
    {
      if(next1!=it->getage())
      {
        cout<<endl;
      }
      cout << it->getname() << " " << it->getinterest() << " " << it->getage()
           << " " << endl;
      next1=it->getage();
    }
  cout<<endl;
  cout<<"Групи за інтересами:"<<endl;
  string next = " ";
  sort(cont.begin(), cont.end(), byinterest());
  for (auto it = cont.begin(); it != cont.end(); it++) 
  {
      if(next!=it->getinterest())
      {
        cout<<endl;
      }
      cout << it->getname() << " " << it->getinterest() << " " << it->getage()
           << " " << endl;
      next=it->getinterest();
  }
}

int main() {
  setlocale(LC_ALL, "");
  vector<Student> rawlist;
  rawlist.push_back(Student(25, "Програмування", "Сергій"));
  rawlist.push_back(Student(18, "Дизайн", "Уляна"));
  rawlist.push_back(Student(18, "Дизайн", "Світлана"));
  rawlist.push_back(Student(32, "Програмування", "Надія"));
  rawlist.push_back(Student(32, "Дизайн", "Ігор"));
  rawlist.push_back(Student(25, "Менеджмент", "Святослав"));
  rawlist.push_back(Student(28, "Дизайн", "Роман"));
  rawlist.push_back(Student(25, "Менеджмент", "Анастасія"));

  group(rawlist);
}
