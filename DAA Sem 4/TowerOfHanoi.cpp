#include <bits/stdc++.h>
using namespace std;

void Hanoi(int n, char A, char B, char C)
{
    if (n == 0)
    {
        return;
    }

    else
    {
        // Source to Help using Destination
        Hanoi(n - 1, A, C, B);
        // Source to Destination using Help
        cout << "Move disk " << n << " from " << A << " - > " << C << endl;
        // Help to Destination using Source
        Hanoi(n - 1, B, A, C);
    }
}

int main()
{
    int n;
    cin >> n;
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}