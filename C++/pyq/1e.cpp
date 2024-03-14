#include <iostream>
using namespace std;

class Sample
{
public:
    int data;
};
int main()
{
    Sample s1;
    s1.data = 4;
    cout << s1.data;
    return 0;
}