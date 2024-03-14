#include <iostream>
using namespace std;
// #define long long int
int main()
{
    long long int i = 0, n, k, evencount = 0, oddcount = 0;
    cin >> n >> k;
    long long int a[n] = {0}, e[n] = {0}, o[n] = {0};

    for (int j = 1; j <= n; j++)
    {
        if (j % 2 == 1)
        {
            o[i] = j;
            oddcount++;
        }
        else if (j % 2 == 0)
        {
            e[i] = j;
            i++;
            evencount++;
        }
    }
    // cout << "Oddcount=" << oddcount << endl;
    // cout << "evencount=" << evencount << endl;

    cout << "odd array\n";
    for (int j = 0; j < oddcount; j++)
    {
        a[j] = o[j];
        // cout << a[j] << endl;
    }

    cout << "Even array\n";
    for (int j = 0; j < evencount; j++)
    {
        a[oddcount + j] = e[j];
        // cout << a[oddcount + j] << endl;
    }
    /*
    cout << "Output\n";
    for (int p = 0; p < n; p++)
    {
        cout << a[p] << endl;
    }*/
    cout << "Element at kth position=" << a[k - 1];
    return 0;
}