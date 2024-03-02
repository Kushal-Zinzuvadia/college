#include <iostream>
using std::cout;
using std::endl;
//funtion with a reference in argument cal only be called by passing a constant value. sq(sq(num)) is not a constant.
int square(int n)
{
    n = n * n;
    return n;
}

int main()
{
    int num = 2;
    cout << square(num) << " ";
    cout << square(square(num)) << " ";
    cout << num;
    return 0;
}