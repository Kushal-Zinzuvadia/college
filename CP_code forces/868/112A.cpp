#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    int i, j;
    getline(cin, a);
    getline(cin, b);
    for (i = 0; i < a.length(); i++)
    {

        if (a.at[i] > A && a.at[i] < Z)
        {
            a.at[i] += 32;
        }

        if (b.at[i] > A && b.at[i] < Z)
        {
            b.at[i] += 32;
        }

        /*if (a.at[i] > b.at[i])
        {
            cout << "1";
        }

        else if (a.at[i] < b.at[i])
        {
            cout << "-1";
        }

        else
            cout << "0";*/
    }
    cout << a.compare(s2);
}