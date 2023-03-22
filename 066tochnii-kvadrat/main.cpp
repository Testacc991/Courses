#include <memory>
#include <functional>
#include <iostream>
#include <algorithm>
using namespace std::placeholders;
bool issquare(int num , int den)
{
    if(num==den)
      return true;
    return false;
}
void approach()
{
  int arr[200];
  for(int i=0;i<200;i++)
    {
      arr[i]=rand()%10000+1000;
    }
  std::cout<<"***Масив чисел***"<<std::endl;
  for(int i=0;i<200;i++)
    {
      std::cout<<arr[i]<<" ";
    }
  std::cout<<std::endl;
  std::cout<<"***Перевірка***"<<std::endl;
  bool find = false;
  for(int v=32;v<100;v++)
    {  
      if(std::count_if(arr, arr + sizeof(arr)/sizeof(int) , std::bind(&issquare, _1, v*v)))
      {
      find = true;
      std::cout<<v*v<<"-збіг чисел з масиву та квадратів чисел 32-99 виявлено"<<std::endl;
      }
    }
  if(!find)
  {
  std::cout<<"Збігів чисел з масиву та квадратів чисел 32-99 не виявлено"<<std::endl; 
  }
}
int main()
{
  srand(time(NULL));
  approach();
}