#include <iostream>
#include <vector>
//#include <Windows.h>
using namespace std;
void solution(vector<int>& v, int K) {
    //cout << v.size() << endl;
    int size = v.size() - 1;
    for (int i = 1; i <= K; i++) {
        v.insert(v.begin(),v[size]);
        v.erase(v.end() - 1);
    }
}
int main() {
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    srand(time(NULL));
    vector<int> vec;

    int KILKIST = 10; 
    int ZSUV = 3;

    for (int i = 1; i <= KILKIST; i++)
        vec.push_back(i);
    cout << "Початковий порядок:";
    for (auto i = 0; i < vec.size();i++)
        cout << vec[i] << " ";
    cout << endl;
    solution(vec, ZSUV);

    cout << "Після зсуву :      ";
   for (auto i = 0; i < vec.size();i++)
        cout << vec[i] << " ";

    return 0;
}