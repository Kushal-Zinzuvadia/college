#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "These are", str2 = "String Handling", str3 = "Functions", res1, res2;
    res1 = str1 + " " + str2 + " " + str3;
    cout << res1 << endl;
    res2 = res1;
    res2.erase(9, 15);
    cout << res2 << endl;
    cout << res2.length() << endl;
}