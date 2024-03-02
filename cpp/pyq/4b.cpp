#include <iostream>
using namespace std;

class time
{
    int h;
    int m;
    int s;

public:
    void displaytime()
    {
        cout << h << ":" << m << ":" << s << endl;
    }

    void readtime()
    {
        cin >> h >> m >> s;
    }

    void sum(time t1, time t2)
    {
        h = t1.h + t2.h;
        m = t1.m + t2.m;
        s = t1.s + t2.s;
    }
} t1, t2, t3;

int main()
{
    t1.readtime();
    t2.readtime();
    t3.sum(t1, t2);
    t3.displaytime();
}