#pragma once
#include <map>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
typedef map< string, int> sublist;
class Student
{
    sublist subject_and_rating;
public:
    Student(sublist subject_and_rating) :subject_and_rating(subject_and_rating) {};
    void showrating()
    {
        for (auto it = subject_and_rating.begin(); it != subject_and_rating.end(); it++) {
            cout << left << setw(10) << it->first << " " << it->second << endl;
        }
    }
    void changerating()
    {
        int value;
        string key;
        cout << "Введіть назву предмета для зміни" << endl;
        cin >> key;
        if (subject_and_rating.find(key) != subject_and_rating.end())
        {
            while (true)
            {
                cout << "Введіть оцінку:\n";
                cin >> value;
                if (value > 0 && value < 101)
                {
                    subject_and_rating[key] = value;
                    cout << "Оцінку додано" << endl;
                    break;
                }
                else
                {
                    cout << "Оцінка має бути від 1 до 100" << endl;
                }
            }
        }
        else
        {
            cout << "Студент не вивчає цей предмет!\n";
        }
    }
    void award()
    {
        size_t size = subject_and_rating.size();
        size_t sum = 0;
        for (auto it = subject_and_rating.begin(); it != subject_and_rating.end(); it++) {
            sum += it->second;
        }
        if (sum / size >= 80)
        {
            cout << "Нагорода допускається" << endl;
        }
        else
        {
            cout << "Нагорода не допускається" << endl;
        }
    }
};