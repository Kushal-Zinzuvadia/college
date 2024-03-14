#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string strin,strout;
    cin >> t;
    char a[t][100];
    char *p;
    p = &a[0][0];
    for (int i = 0, j = 0; i < t; i++, j++)
    {
        cin >> *(p + (t * i) + j);
        j++;
    }

    for (int i = 0, j = 0; i < t; i++, j++)
    {
        str=*(p + (t * i) + j)
        if (str.length()>10)
        {

        }
    }
}