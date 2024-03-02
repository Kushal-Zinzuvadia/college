#include <iostream>
using namespace std;

int main()
{
    int n, *ptr;
    cin >> n;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << endl;
    }
}