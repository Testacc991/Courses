#include <iostream>
#include <vector>
#include "Array.h"
using std::cout;
using std::endl;
int main()
{
    Array<wchar_t> sArray;
    try
    {
        sArray.addElem(L'1');
        sArray.addElem(L'2');
        sArray.addElem(L'3');
        sArray.addElem(L'=');
        sArray.addElem(L'%');
        sArray.addElem(L'4');
        sArray.addElem(L'?');
        sArray.addElem(L'.');
        sArray.addElem(L'j');
    }
    catch (Array<wchar_t>::InvalidSymbol s)
    {
        cout << "Заборонений символ в масиві: " << (char)s.getSymbol() << endl;
    }
    cout<< "Масив до забороненого символу: " << sArray << endl;
}