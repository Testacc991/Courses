#include "classes.h"
#include <cmath>
using namespace std;
char letters[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
void Board::fillboard()
{
    for (short y = 0; y < 8; y++)
    {
        for (short x = 0; x < 8; x++)
        {  
            string temp;
            temp += letters[y];
            temp += to_string(x+1);
            if (y % 2)
            {
                x % 2 ? this->board[x][y] = "  " : this->board[x][y] = temp;
            }
            else
            {
                x % 2 ? this->board[x][y] = temp : this->board[x][y] = "  ";
            }
        }  
    }
}
void Board::showboard()
{
    for (short i = 0; i < 8; i++)
    {
        for (short j = 0; j < 8; j++)
        {
            cout << this->board[i][j];
        }
        cout << endl;
    }
}


Figure::Figure()
{
    
    string input;
    cout << "Введіть координати для фігури" << endl;//букви x цифри y
    cin >> input;
    for (short i = 0; i < 8; i++)
    {
        if (letters[i] == input[0])//input 0 - bukva input 1 -cyfra
        {
            this->startx = i;
            break;
        }
    }
   this->starty = (int)((input[1]) - 49);
};
void Figure::getdestination() {
    string input;
    cout << "Введіть координати для переміщення" << endl;//букви x цифри y
    cin >> input;
    for (short i = 0; i < 8; i++)
    {
        if (letters[i] == input[0])
        {
            this->destx = i;
            break;
        }
    }
    this->desty = (int)((input[1]) - 49);
}
void Usual::checkmove()
{
    getdestination();
    short distancex = this->destx - this->startx;
    short distancey = this->desty - this->starty;
     //cout << distancex << endl;
     //cout << distancey << endl;
    if ((distancex == 1) && (distancey == -1)) 
    { 
        cout<<"true"<<endl; 
    }
    else if ((distancex == -1) && (distancey == -1))
    {
        cout << "true" << endl;
    }
    else
    {
        cout <<"false"<< endl;
    }
}
void Queen::checkmove()
{
    getdestination();
    short distancex = this->destx - this->startx;
    short distancey = this->desty - this->starty;
    //cout << distancex << endl;
    //cout << distancey << endl;
    if (abs(distancex) == abs(distancey))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}