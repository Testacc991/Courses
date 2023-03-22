#pragma once
#include <string>
using namespace std;
class Student {
  string name;
  int age;
  string interest;

public:
  Student(int age, string interest, string name)
      : age(age), interest(interest), name(name){};
  Student(const Student &source) {
    name = source.name;
    age = source.age;
    interest = source.interest;
  }
  int getage() const { return age; }
  string getinterest() const {return interest; }
  string getname() const {return name; }
};