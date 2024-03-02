#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,l,j;
	cin>>t;
	while(t--)
	{
	    int ans=0,count=0,p,q;
	    cin>>n;
	    int r=n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=n-1;i<n;i--)
	        {
	            p=i;
	            q=j;
	            while(p==q)
	            {
	                ans=a[p]-a[q];
	                p++;
	            }
	        }
	        if(a[j]-a[i]==ans)
	            count++;
	    }
	    //cout<<i<<j;
	    cout<<count<<endl;
	}
	return 0;
}
