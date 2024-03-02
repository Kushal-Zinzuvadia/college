#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c > 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}