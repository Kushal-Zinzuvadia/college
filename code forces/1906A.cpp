#include<bits/stdc++.h>
using namespace std;
int g[3][3];

int adj(int r,int c,int x,int d)
{
    int mini=0;
    if(x==r && d==c+1)
        mini=min(min,g[x][d]);

    if(x==r-1 && d==c+1)
        mini=min(min,g[x][d]);

    if(x==r-1 && d==c)
        mini=min(min,g[x][d]);

    if(x==r-1 && d==c-1)
        mini=min(min,g[x][d]);

    if(x==r && d==c-1)
        mini=min(min,g[x][d]);

    if(x==r+1 && d==c-1)
        mini=min(min,g[x][d]);

    if(x==r+1 && d==c)
        mini=min(min,g[x][d]);

    if(x==r+1 && d==c+1)
        mini=min(min,g[x][d]);

    return mini;
}

int main()
{
    pair<int,int> p1[3];
    char ch;
    int p2[3];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ch;
            g[i][j]=ch-'A';
            if(g[i][j]==0)
                
        }
    }

    for(int i=0;i<3;i++)
    {
        p2[i]=
    }
}