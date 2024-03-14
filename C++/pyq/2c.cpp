#include <iostream>
#include <math.h>
using namespace std;

int area(float s)
{
    return (3.14 * s * s);
}

int area(int l, int w)
{
    return (l * w);
}

int area(int a, int b, int c)
{
    int s, area;
    s = (a + b + c) / 2;
    area = s * (s - a) * (s - b) * (s - c);
    area = pow(area, 0.5);
    return (area);
}

int main()
{
    cout << area(7) << endl;
    cout << area(5, 5) << endl;
    cout << area(5, 3, 4) << endl;
}