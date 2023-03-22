// Translator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f1, f2, f3;
    string str1, str2; //str1 for fetching string line from file 1 and str2 for fetching string from file2

    f1.open("words_EN.txt", ios::in);//opening file in reading mode
    f2.open("words_UA.txt", ios::in);
    f3.open("result.txt", ios::out);//opening file in writing mode

    while (getline(f1, str1) && getline(f2, str2)) { //read lines from file object and put it into string and push back to file 3.
        f3 <<"{\"" << str1 << "\",\"" << str2 <<"\"}"<<","; // inserting the fetched string inside file3
        f3 << endl;
    }

    f1.close();
    f2.close();
    f3.close();
}


