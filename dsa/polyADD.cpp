#include <iostream>
using namespace std;
struct Poly
{
    int cof;
    int pow;
};

void Display(Poly X[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << X[i].cof << "x" << X[i].pow << "+";
    }
    cout << "\n";
}

void Add(Poly P1[], Poly P2[], int n1, int n2)
{
    Poly P3[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (P1[i].pow == P2[j].pow)
        {
            P3[k].cof = P1[i].cof + P2[j].cof;
            P3[k].pow = P1[i].pow;
            i++;
            j++;
            k++;
        }
        else if (P1[i].pow > P2[j].pow)
        {
            P3[k].cof = P1[i].cof;
            P3[k].pow = P1[i].pow;
            i++;
            k++;
        }
        else if (P1[i].pow < P2[j].pow)
        {
            P3[k].cof = P2[j].cof;
            P3[k].pow = P2[j].pow;
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        P3[k].cof = P1[i].cof;
        P3[k].pow = P1[i].pow;
        i++;
        k++;
    }
    while (j < n2)
    {
        P3[k].cof = P2[j].cof;
        P3[k].pow = P2[j].pow;
        j++;
        k++;
    }
    Display(P3, k);
}

int main()
{
    int n1, n2;
    cout << "Size of 1:";
    cin >> n1;
    cout << "Size of 2:";
    cin >> n2;
    Poly P1[n1], P2[n2];
    cout << "Enter Elements of 1:\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> P1[i].cof >> P1[i].pow;
    }

    cout << "Enter Elements of 2:\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> P2[i].cof >> P2[i].pow;
    }
    Display(P1, n1);
    Display(P2, n2);
    Add(P1, P2, n1, n2);
    return 0;
}