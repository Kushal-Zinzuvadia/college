#include <iostream>
using namespace std;
inline int fac(int i)
{
    return i*fac(i-1);
}
int main() {
	// your code goes here
	int t;
	int x[100],y[100];
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>x[i]>>y[i];
	}
	for(int i=0;i<10;i++)
	{
        if(fac(i)>=(x[i]-y[i]))
        {
            cout<<i<<endl;
            break;
        }
	}
	return 0;
}
