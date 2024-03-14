#include <iostream>
using namespace std;

int main()
{
    int n, h, w = 0, a[1001];
    int *p = &a[0];
    cin >> n >> h;
    while (n--)
    {
        cin >> a[n];
        if (*(p + n) <= h)
            w++;
        else
            w += 2;
    }
    cout << w;
}