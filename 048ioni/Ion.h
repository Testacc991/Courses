#pragma once
#include <iostream>
#include "string"
using namespace std;
class Ion
{
private:
    bool* charge;
    int* val;
    bool* vstup;
public:
    int Getval()
    {
        return *val;
    }
    int Getcharge()
    {
        return *charge;
    }
    Ion()
    {
        this->charge = new bool(rand() % 2);
        this->val = new int(rand() % 6 + 1);
        this->vstup = new bool(false);
        cout << "Створено"<<" "<< *this->charge<<" "<< *this->val << endl;
    }
    Ion(bool charge,int val)
    {
        this->charge = new bool(charge);
        this->val = new int(val);
        this->vstup = new bool(false);
        cout << "Створено" << " " << *this->charge << " " << *this->val << endl;
    }
    
    ~Ion()
    {
       // cout << "Destroyed" << endl;
        delete this->charge;
        delete this->val;
        delete this->vstup;
    }
    Ion(const Ion& other)
    {
       //cout << "Copied" << endl;
        this->charge = other.charge;
        this->val = other.val;
        this->vstup = other.vstup;
    }
    Ion(Ion&& other) noexcept
    {
       // cout << "Moved" << endl;
        this->charge = other.charge;
        this->val = other.val;
        this->vstup = other.vstup;

        other.charge = nullptr;
        other.val = nullptr;
        other.vstup = nullptr;
    }
    Ion& operator = (Ion& other)
    {
        if (this == &other)
            return *this;
        if (*this->charge != *other.charge && *this->val ==*other.val)
        {
            if (*this->vstup == false && *other.vstup == false)
            {
            cout << *this->charge << " " << *this->val << " та "
                 << *other.charge << " " << *other.val
                 << " Вступає в реакцію" << endl;
            *this->vstup = true;
            *other.vstup = true;
            }   
        }
        else
        {
            if (*this->vstup == false && *other.vstup == false)
            {
                cout << *this->charge << " " << *this->val << " та "
                    << *other.charge << " " << *other.val
                    << " Не вступає в реакцію" << endl;
            }
        }
        return *this;
    }
    Ion& operator = (Ion&& other) noexcept
    {
        cout << "rOperator" << endl;
        if (this == &other)
            return *this;
        delete this->charge;
        delete this->val;

        this->charge = other.charge;
        this->val = other.val;

        other.charge = nullptr;
        other.val = nullptr;
        return *this;
    }
};