#include <iostream>
using namespace std;
class centimeter
{
public:
    int cm;
};
class meter
{

public:
    int m;
    void input()
    {
        cin >> m;
    }

    void output()
    {
        cout << m << endl;
    }
    operator=(centimeter &d)
    {
        return (d.cm / 100);
    }
};

centimeter::void input()
{
    cin >> cm;
}

centimeter::void output()
{
    cout << cm << endl;
}

centimeter::operator=(meter &d)
{
    return (d.m * 100);
}

int main()
{
    meter m1, m2;
    centimeter c1, c2;
    c1.input();
    m1 = c1;
    m1.output();
    m2.input();
    c2 = m2;
    c2.output();
    return 0;
}