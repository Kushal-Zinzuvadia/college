#include <iostream>
using namespace std;

int main()
{
    int a[6][6], x, y, count = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j])
            {
                x = i;
                y = j;
            }
        }
    }
    while (x != 2)
    {
        if (x > 2)
        {
            a[x - 1][y] = 1;
            a[x][y] = 0;
            count++;
        }
        else
        {
            a[x + 1][y] = 1;
            a[x][y] = 0;
            count++;
        }
    }
    while (y != 2)
    {
        if (y > 2)
        {
            a[x][y - 1] = 1;
            a[x][y] = 0;
            count++;
        }
        else
        {
            a[x][y + 1] = 1;
            a[x][y] = 0;
            count++;
        }
    }
    cout << count;
    return 0;
}