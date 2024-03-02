#include <iostream>
using namespace std;
struct data
{
    int m;
    int s;
} a[100];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].m >> a[i].s;
        }

        int min01 = 1000, min10 = 1000, min11 = 1000;
        for (int i = 0; i < n; i++)
        {
            if (a[i].s == 01)
            {
                if (a[i].m < min01)
                {
                    min01 = i;
                }
            }

            if (a[i].s == 10)
            {
                if (a[i].m < min10)
                {
                    min10 = i;
                }
            }

            if (a[i].s == 11)
            {
                if (a[i].m < min11)
                {
                    min11 = i;
                }
            }
        }
        if ((min01 == 1000 || min10 == 1000) && min11 != 1000)
        {
            cout << a[min11].m << endl;
        }

        else if (min11 == 1000 && (min01 != 1000 && min10 != 1000))
        {
            cout << a[min01].m + a[min10].m << endl;
        }

        else if (min11 != 1000 && min01 != 1000 && min10 != 1000)
        {
            if (a[min01].m + a[min10].m < a[min11].m)
            {
                cout << a[min01].m + a[min10].m << endl;
            }

            else
                cout << a[min11].m << endl;
        }

        else
            cout << "-1" << endl;
    }
    return 0;
}