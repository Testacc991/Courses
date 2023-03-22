#ifndef Array_h
#define Array_h
#include <iostream>
using std::istream;
using std::ostream;
using std::cout;
using std::endl;
template <typename T> class Array
{
    friend ostream& operator<<(ostream& out, const Array& a)
    {
        for (int i = 0; i < a.size; i++)
            out <<(char)a.pa[i] << ' ';
        return out;
    }
    friend istream& operator >> (istream& in, Array& a)
    {
        for (int i = 0; i < a.size; i++)
            in >> a.pa[i];
        return in;
    }
private:
    T* pa;
    int  size;
public:
    wchar_t symbols[32] = { L'‘', L'₴', L'1', L'2', L'3', L'4', L'5', L'6', L'7', L'8', L'9', L'0', L'-', L'=',
        L'!', L'”', L'N', L';', L'%', L':', L'?', L'*', L'(', L')', L'_', L'+', L'/', L'*', L'\\', L',', L'.' };
    class OutOfBounds
    {
        int index;
    public:
        OutOfBounds(int i) : index(i) { }
        int getIndex() const { return index; }
    };
    class InvalidSymbol
    {
        wchar_t symbol;
    public:
        InvalidSymbol(wchar_t s) : symbol(s) { }
        int getSymbol() const { return symbol; }
    };
    Array() { pa = 0; size = 0; }
    Array(int n);
    Array(Array& arr);
    ~Array() { if (pa) delete[] pa; }
    void addElem(T elem);
    T& operator[](int index);
    const Array& operator=(const Array& a);
    bool operator==(const Array& a) const;
    int getSize() const { return size; }
};
template <typename T> Array<T>::Array(int n)
{
    pa = new T[size = n];
}
template <typename T> Array<T>::Array(Array& arr)
{
    size = arr.size;
    pa = new T[size];
    for (int i = 0; i < size; i++)
        pa[i] = arr.pa[i];
}
template <typename T> void Array<T>::addElem(T elem)
{
    //cout << elem << endl;
    T* temp = new T[size + 1];
    if (pa)
    {
        for (int i = 0; i < size; i++)
            temp[i] = pa[i];
        delete[] pa;
    }
    pa = temp;
    bool find = false;
    for (int i = 0; i < 32; i++)
    {
        if (elem == symbols[i])
        {
            find = true;
        }
    }
    if (find == false)
    {
        throw InvalidSymbol(elem);
    }
    pa[size] = elem;
    size++;
}
template <typename T> T& Array<T>::operator[](int index)
{
    if (index < 0 || index >= size)
        throw OutOfBounds(index);
    return pa[index];
}
template <typename T> const Array<T>& Array<T>::operator=(const Array<T>& a)
{
    if (&a != this)
    {
        if (pa)
            delete[] pa;
        size = a.size;
        pa = new T[size];
        for (int i = 0; i < size; i++)
            pa[i] = a.pa[i];
    }
    return *this;
}
template <typename T> bool Array<T>::operator==(const Array<T>& a) const
{
    if (&a == this)
        return true;
    if (size != a.size)
        return false;
    for (int i = 0; i < size; i++)
        if (pa[i] != a.pa[i])
            return false;
    return true;
}
template <typename T> T getSum(Array<T>& a)
{
    T sum = T();
    for (int i = 0; i < a.getSize(); i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
#endif