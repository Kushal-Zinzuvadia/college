#include <iostream>
using namespace std;
class bill
{
public:
    float u;
    float amt;

    bill()
    {
        cin >> u;
    }

    void display()
    {
        cout << amt << endl;
    }

    virtual void compute()
    {
        if (u > 300)
        {
            amt = ((u - 300) * 0.60) + (300 * 0.5);
            // cout << ((u - 300) * 0.60) + (300 * 0.5) << endl;
        }

        else
        {
            amt = u * 0.5;
            cout << u * 0.5 << endl;
        }
    }
};

class final_bill : public bill
{
public:
    void compute()
    {
        bill::compute();
        if (amt > 250)
        {
            amt = amt * 1.15;
        }
    }

    void display()
    {
        cout << amt << endl;
    }
};

int main()
{
    bill *ptr = new bill;
    ptr->compute();
    ptr->display();

    ptr = new final_bill;
    ptr->compute();
    ptr->display();
}