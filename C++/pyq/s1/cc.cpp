#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n[100],x[100],count[100]={0},a[100][100];
    cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n[i]>>x[i];
	    for(int j=0;j<n[i];j++)
	    {
	        cin>>a[i][j];
	    }
	}
	
	for(int i=0;i<t;i++)
	{
	    for(int j=0;j<n[i];j++)
	    {
	        if(a[i][j]>=x[i])
	        {
	            count[i]++;
	        }
	    }
	    cout<<count[i]<<endl;
	}
	return 0;
}
