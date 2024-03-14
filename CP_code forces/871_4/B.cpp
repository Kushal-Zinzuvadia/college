#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, len = 0;
        cin >> n;
        int a[n], l[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                len++;
                l[i] = len;
            }
            else if (a[i] == 1)
            {
                l[i] = len;
                len = 0;
            }
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (l[i] > max)
            {
                max = l[i];
            }
        }
        cout << max << endl;
    }
}