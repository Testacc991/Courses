#include "Shop.h"
#include "Good.h"
#include <iostream>
#include <iomanip>
int Shop::countItems(string name)
{
    int count = 0;
    for (auto it = this->goods.begin(); it != this->goods.end(); ++it) {
        if (it->getName() == name)
        {
            count++;
        }
    }
    return count;
}
void Shop::addItems(string name, int price, int number)
{
    for (int i = 0; i < number; i++)
    {
        this->goods.push_back(Good(name, price));
    }
}
void Shop::removeItems(string name, int number)
{
    int goodscount = countItems(name);
    
    if (number > goodscount)
    {
        cout << "Кількість товарів всього:"<< goodscount << endl;
    }
    else 
    {
        int count = 0;
        for (auto it = this->goods.begin(); it != this->goods.end(); it++)
        {
           if (it->getName() == name && count < number)
           {
               
               it = this->goods.erase(it);
               count++;
               //cout << "lol" << endl;
           }
        }
    }
    
}
void Shop::printAll()
{
    string name = "";
    string pname = "";
    for (auto it = this->goods.begin(); it != this->goods.end(); ++it)
    {
        name = it->getName();
        if (pname != name)
        {
            int count = countItems(name);
            int price = it->getPrice();
            cout << "Назва: " << left << setw(10) << name <<
                    "Кількість: " << left << setw(4) << count << 
                    "Ціна: " << price * count << endl;
            
            pname = name;
        }  
    }
}