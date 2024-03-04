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

void Multi(Poly P1[], Poly P2[], int n1, int n2)
{
    int i, j, k, flag;
    int cof, pow;
    int next = 0;
    Poly P3[n1 * n2];

    i = 0;
    while (i < n1)
    {
        j = 0;
        while (j < n2)
        {
            cof = P1[i].cof * P2[j].cof;
            pow = P1[i].pow + P2[j].pow;
            k = flag = 0;
            while (k < next && flag != 0)
            {
                if (P3[k].pow == pow)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    k++;
                }
            }
            if (flag == 1)
            {
                P3[k].cof = P3[k].cof + cof;
            }
            else
            {
                P3[next].pow = pow;
                P3[next].cof = cof;
                next++;
            }
            j++;
        }
        i++;
    }
    Display(P3, next);
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
    Multi(P1, P2, n1, n2);
    return 0;
}