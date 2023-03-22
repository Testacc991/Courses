#include <iostream>
using namespace std;
int main()
{
	int sec, hv, hod;
	int chas;
	int vvid;
	cout << "Введіть час з початку доби в секундах\n";
	cin >> vvid;
  if (vvid >= 0)
  {
    if (vvid > 3600 * 24) 
    {
      vvid = vvid % (3600 * 24);
    }
    vvid = 3600 * 24 - vvid;
	  hod =  vvid / 60 / 60;
	  hv = vvid / 60 % 60;
	  sec = vvid % 60;
	  cout << "До півночі залишилось\n годин:" << hod <<  "\n хвилин:" << hv <<   
    "\n секунд:" << sec;
  }
  else
  {
    cout << "Ви ввели від'ємне число";
  }
	
}