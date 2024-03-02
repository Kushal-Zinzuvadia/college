#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (m > 0 && n > 0 && m <= 16 && n <= 16)
        cout << (m * n) / 2;
    else
        cout << "0";
}