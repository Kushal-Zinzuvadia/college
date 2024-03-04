#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *link;
    node(int d)
    {
        data = d;
        link = NULL;
    }
};

class impl
{
public:
    node *ptr;
    node *temp;
    impl()
    {
        ptr = NULL;
    }

    void atend(int d)
    {
        node *m = new node(d);
        if (ptr == NULL)
        {
            ptr = m;
        }
        else
        {
            temp = ptr; 
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = m;
        }
    }

    void disp()
    {
        node *t;
        t = ptr;
        while (t != NULL)
        {
            cout << t->data << " ";
            t = t->link;
        }
    }
};

int main()
{
    impl o1;
    o1.atend(5);
    o1.atend(12);
    o1.atend(18);
    o1.atend(24);
    o1.atend(29);
    o1.disp();
}