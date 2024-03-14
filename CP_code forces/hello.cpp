#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPathCrossing(string path)
    {
        int x[path.length() + 1], y[path.length() + 1];
        x[0] = 0;
        y[0] = 0;
        bool visit = true;
        for (int i = 0; i < path.length(); i++)
        {
            cout<<path[i]<<endl;
            //while (visit)
            {
                if (path[i] == 'N')
                {
                    y[i + 1] = y[i] + 1;
                    x[i + 1] = x[i];
                }
                if (path[i] == 'S')
                {
                    y[i + 1] = y[i] - 1;
                    x[i + 1] = x[i];
                }
                if (path[i] == 'E')
                {
                    y[i + 1] = y[i];
                    x[i + 1] = x[i] + 1;
                }
                if (path[i] == 'W')
                {
                    y[i + 1] = y[i];
                    x[i + 1] = x[i] - 1;
                }

                for (int j = 0; j < i+1; j++)
                {
                    cout<<"Checking"<<endl;
                    for (int k = j+1; k < i+2; k++)
                    {
                        cout<<x[j] << y[j] << endl;
                        cout<<x[k] << y[k] << endl;
                        if (x[k] == x[j] && y[k] == y[j])
                        {
                            cout<<"Duplicate Found"<<endl;
                            visit = false;
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution A;
    cout<<"Main"<<endl;
    bool b = A.isPathCrossing("SN");
    cout << b << endl;
    return 0;
}