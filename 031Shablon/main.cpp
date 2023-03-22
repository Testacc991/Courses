#include <iostream>
using namespace std;
const int rows = 5;
const int cols = 5;

//float columns[cols];
//float ryadky[rows];
//float array1[rows][cols];

//char columns[cols];
//char ryadky[rows];
//char array1[rows][cols];

int columns[cols];
int ryadky[rows];
int array1[rows][cols];

void fillarray(char(&array)[rows][cols])
{
    for (int y = 0; y < cols; y++)
    {
        for (int x = 0; x < rows; x++)
        {
            array[x][y] = rand() % (122 - 97) + 97;
            //int chyslo = rand() % 100;
            //array[x][y] = (double)1.5 / chyslo;
        }
    }
}

void fillarray(float(&array)[rows][cols])
{
    for (int y = 0; y < cols; y++)
    {
        for (int x = 0; x < rows; x++)
        {
            //array[x][y] = rand() % 100 + 1;
            int chyslo = rand() % 100;
            array[x][y] = (double)1.5 / chyslo;
        }
    }
}
void fillarray(int (&array)[rows][cols])
{
    for (int y = 0; y < cols; y++)
    {
        for (int x = 0; x < rows; x++)
        {
            array[x][y] = rand() % 100+1;
            //int chyslo = rand() % 100;
            //array[x][y] = (double)1.5 / chyslo;
        }
    }
}
template <typename t_type>
void findvalue(t_type (&array)[cols][rows])
{
    for (int y = 0; y < cols; y++)
    {

        t_type poriv = array[y][0];
        for (int x = 0; x < rows; x++)
        {
            if (array[y][x] < poriv)
            {
                poriv = array[y][x];
            }
            //cout << array[y][x]<<" ";
        }
        //cout << endl;
        ryadky[y] = poriv;
    }
    for (int y = 0; y < cols; y++)
    {

        t_type poriv = array[0][y];
        for (int x = 0; x < rows; x++)
        {
            if (array[x][y] < poriv)
            {
                poriv = array[x][y];
            }
            //cout << array[y][x]<<" ";
        }
        //cout << endl;

        columns[y] = poriv;
    }
}
int main() {
   
    
    srand(time(NULL));
    fillarray(array1);
    findvalue(array1);
    
    for (int y = 0; y < cols; y++)
    {
        for (int x = 0; x < rows; x++)
        {
            cout << array1[y][x] << " ";
        }
        cout <<"  "<< ryadky[y];
        cout << endl;
    }
    cout << endl;
    for (int x = 0; x < rows; x++)
    {
        cout << columns[x] << " ";
    }
}