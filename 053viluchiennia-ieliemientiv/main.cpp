#include <iostream>
#include <set>
using namespace std;
template <class T> void print(T start, T end) {
        for ( ;start != end; ++start) {
                cout << *start << " ";
        }
        cout<<endl;
    }
int main() {
  int arr[10] = {};
  for(int i = 1;i<10;i++)
    {
      arr[i] = i*10;
    }
    set <int> numbers(arr, arr+10);
    int number;
    while(true)
      {
        cout<<"Поточний список номерів:"<<endl;
        print(numbers.begin(), numbers.end());
        number = 0;
        cout<<"Оберіть номер для вилучення:"<<endl;
        cin>>number;
        numbers.erase(numbers.find(number));
        if(numbers.size()==0)
        {
          cout<<"Програму завершено"<<endl;
          break;
        }
      }
  }