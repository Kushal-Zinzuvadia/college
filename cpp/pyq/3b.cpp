#include <iostream>
using namespace std;
// void sum(int &a, int n);
class item
{
    int icode;
    int iprice;

public:
    int readitem()
    {
        cin >> icode >> iprice;
        return iprice;
    }

    void printitem()
    {
        cout << icode << endl
             << iprice << endl;
    }

    int value()
    {
        return iprice;
    }
};
int main()
{
    item a[100];
    int n;
    int ans, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ans = a[i].readitem();
        total += ans;
    }

    cout << total;
}
//{
//    int total;
//    for (int i = 0; i < n; i++)
//    {
//        total += a[i].value();
//    }
//    cout << total << endl;
//}