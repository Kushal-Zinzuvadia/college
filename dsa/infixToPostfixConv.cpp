#include <iostream>
#include <stack>
using namespace std;

char NextToken(string s)
{
    static int i = 0;
    return s[i++];
}
int isp(char x)
{
    if (x == '^')
        return 5;
    else if (x == '/' || x == '*')
        return 4;
    else if (x == '+' || x == '-')
        return 3;
    else if (x == '#')
        return -1;
    else
        return 0;
}

int icp(char a)
{
    if (a == '^')
        return 5;
    else if (a == '/' || a == '*')
        return 4;
    else if (a == '+' || a == '-')
        return 3;
    else if (a == '#')
        return -1;
    else if (a == '(')
        return 6;
    else
        return -6;
}

void postfix(string s)
{
    stack<char> st;
    st.push('#');
    for (char y = NextToken(s); y != '#'; y = NextToken(s))
    {
        if (y == ')')
        {
            for (y = st.top(); y != '('; y = st.top())
            {
                cout << y;
                st.pop();
            }
            st.pop();
        }

        else if (y >= 'A' && y <= 'Z')
        {
            cout << y;
        }

        else
        {
            while (icp(y) <= isp(st.top()))
            {
                cout << st.top();
                st.pop();
            }
            st.push(y);
        }
    }
    while (st.top() != '#')
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s = "(A+B)*C^D/(E-F)*G";
    postfix(s);
    return 0;
}