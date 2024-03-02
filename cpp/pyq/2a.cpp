#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50], str2[50], str3[50], res1[50], res2[50], res3[50];
    strcpy(str1, "You are");
    strcpy(str2, " beautiful");
    strcpy(str3, " smart");
    strcpy(res1, strcat(str1, str2));

    cout << res1 << endl;

    // strncat((((res2, res1, 8), str3, 5), "and", 3), res1, -10);
    strncpy(res3, res2, 14);
    cout << strlen(res3);
    return 0;
}