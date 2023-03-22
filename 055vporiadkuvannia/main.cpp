#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
class Person
{
public:
  string name;
  string surname;
  int age;
  int id;
  Person(int id, string name, string surname, int age):
  id(id), name(name), surname(surname), age(age){};
};

struct byid
{
    inline bool operator() (const Person& person1, const Person& person2)
    {
        return (person1.id < person2.id);
    }
};
struct byname
{
    inline bool operator() (const Person& person1, const Person& person2)
    {
        return strcoll(person1.name.c_str(), person2.name.c_str())<0;  
    }
};
struct bysurname
{
    inline bool operator() (const Person& person1, const Person& person2)
    {
        return strcoll(person1.surname.c_str(), person2.surname.c_str())<0;
    }
};
struct byage
{
    inline bool operator() (const Person& person1, const Person& person2)
    {
        return (person1.age < person2.age);
    }
};
void show(vector<Person>& vect)
{
  for (vector<Person>::iterator it = vect.begin() ; it != vect.end(); ++it)
    {
    cout << it->id <<" "<< it->name <<" "<< it->surname<<" "<<it->age<<endl;
    }
}
int main() {
  setlocale(LC_ALL, "");
  vector<Person> persons;
  persons.push_back(Person(1,"Олег","Іваненко",23));
  persons.push_back(Person(2,"Світлана","Їжаченко",16));
  persons.push_back(Person(3,"Людмила","Ґалаґан",56));
  persons.push_back(Person(4,"Віталій","Дзюба",45));
  persons.push_back(Person(5,"Сергій","Єремійчук",13));
  persons.push_back(Person(6,"Микола","Григорчук",32));
  persons.push_back(Person(7,"Степан","Олексюк",26));
  persons.push_back(Person(8,"Петро","Петрюк",78));
  persons.push_back(Person(9,"Євген","Пилип’юк",89));
  persons.push_back(Person(10,"Юля","Чумаченко",37));
  persons.push_back(Person(11,"Настя","Костюченко",20));
  persons.push_back(Person(12,"Віра","Андрійчук",18));
  persons.push_back(Person(13,"Роман","Яворівський",67));
  persons.push_back(Person(14,"Надія","Пилипенко",27));
  persons.push_back(Person(15,"Борис","Бур’яненко",28));
  persons.push_back(Person(16,"Микола","Буряченко",16));
  persons.push_back(Person(17,"Григорій","Лук’яненко",15));
  persons.push_back(Person(18,"Олександр","Лук’янченко",12));
  
  while(true)
    {
      int vybir = 0;
      cout<<"1 - Сортувати за id"<<endl;
      cout<<"2 - Сортувати за віком"<<endl;
      cout<<"3 - Сортувати за ім`ям"<<endl;
      cout<<"4 - Сортувати за прізвищем"<<endl;
      cout<<"5 - Завершити програму"<<endl;
      cin>>vybir;
      if(vybir==1)
      {
        sort(persons.begin(), persons.end(), byid());
        show(persons);
      }
      else if(vybir==2)
      {
        sort(persons.begin(), persons.end(), byage());
        show(persons);
      }
      else if(vybir==3)
      {
        sort(persons.begin(), persons.end(), byname());
        show(persons);
      }
      else if(vybir==4)
      {
        sort(persons.begin(), persons.end(), bysurname());
        show(persons);
      }
      else
      {
        cout<<"Програму завершено"<<endl;
        break;
      }
    }
}