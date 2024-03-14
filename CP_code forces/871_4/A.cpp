#include <iostream>
using namespace std;

int main()
{
    int t;
    char s[11] = "codeforces";
    cin >> t;
    while (t--)
    {
        int count = 0;
        char a[11];
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
            if (a[i] != s[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}