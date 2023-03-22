#include <iostream>
#include <set>
using namespace std;
class Check
{
string ryadok; 
multiset <char> s1;
public:
void enterrow();
void check();
};
void Check::enterrow()
{
cout<<"Введіть рядок:"<<endl;
cin>>ryadok;
for ( std::string::iterator it=ryadok.begin(); it!=ryadok.end(); ++it)
  {
    //std::cout << *it
    this->s1.insert(*it);
  }
}
void Check::check()
{
  for (auto it = s1.begin(); it != s1.end(); it++)
  {
     cout<< *it << " присутнє " << s1.count(*it) << " разів.\n";
  }
}
int main() {
Check obj;
obj.enterrow();
obj.check();
}