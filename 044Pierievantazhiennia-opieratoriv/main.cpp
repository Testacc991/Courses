#include <iostream>
#include <string>
using namespace std;
class Digit {
private:
    int dig; // 
public:
    Digit()
    {
        dig = 0;
    }
    Digit(int iDig)
    {
        dig = iDig;
    }
    void Show() {
        cout << dig << "\n";
    }
    Digit operator + (const Digit& N)
    {
        Digit temp;
        temp.dig = dig + N.dig;
        return temp;
    }
    Digit operator-(const Digit& N)
    {
        Digit temp;
        temp.dig = dig - N.dig;
        return temp;
    }
    Digit operator/(const Digit& N)
    {
        Digit temp;
        if (N.dig == 0 || dig == 0)
        {
            throw "error";
        }
        temp.dig = dig / N.dig;
        return temp;
    }
    Digit operator*(const Digit& N)
    {
        Digit temp;
        temp.dig = dig * N.dig;
        return temp;
    }
    Digit operator%(const Digit& N)
    {
        if (N.dig != 0)
        {
            Digit temp;
            temp.dig = dig % N.dig;
            return temp;
        }
        else
        {
            Digit temp;
            temp.dig = 0;
            throw "error";
            return temp;
        }
    }
};
int main()
{
    Digit A(9), B(1);
    Digit C;
    cout << "Число A:\n";
    A.Show();
    cout << "Число B:\n";
    B.Show();
    cout << "Число С:\n";
    C.Show();
    cout << "\noperator+:\n";
    C = A + C;
    C.Show();
    cout << "\noperator-:\n";
    C = A - B;
    C.Show();
    cout << "\noperator*:\n";
    C = A * B;
    C.Show();
    cout << "\noperator/:\n";
    try
    {
        C = A / B;
        C.Show();
    }
    catch(const char* exception)
    {
        std::cerr << "Pomylka" << endl;
    }  
    Digit D(0);
    cout << "\noperator%:\n";
    try
    {
        C = A % D; 
        C.Show();
    }
    catch (const char* exception)
    {
        std::cerr << "Pomylka" << endl;
    }
    
}