#include <iostream>
using namespace std;
int main() {
    int A[10], B[10], X[20], chyslo;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        chyslo = rand() % 100 + 1;
        A[i] = chyslo;
        chyslo = rand() % 100 + 1;
        B[i] = chyslo;
    }

    for (int i = 0; i < 10; i++)
    {
        X[i * 2] = A[i];
        X[(i * 2) + 1] = B[i];  
    }
    cout << "Масив A: ";
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Масив B: ";
    for (int i = 0; i < 10; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    cout << "Масив X: ";
    for (int i = 0; i < 20; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
    return 0;
}