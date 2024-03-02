#include <iostream>
using namespace std;
template <class T>
class vect
{
    T *ptr;
    int size;
    int capacity;

public:
    vect(T *a, int b, int c = 1)
    {
        ptr = new T[b];
        *ptr = *a;
        size = b;
        capacity = c;
    }

    ~vect()
    {
        delete ptr;
        // delete size, capacity;
    }

    void push_back(const T &val)
    {
        if (size + 1 > capacity)
        {
            capacity *= 2;
        }
        else
            *(ptr + size) = val;
    }

    T &at(int n)
    {
        return *(ptr + n - 1);
    }
};

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = a;
    vect<int> v1(ptr, 5, 10);
    v1.push_back(6);
    v1.push_back(7);
    cout << v1.at(6) << endl;
}