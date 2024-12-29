#include<bits/stdc++.h>
using namespace std;
int a[99999999];
int n,m,res=0,i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            for(j=i;j<=m;j=j+i){a[j]=1;}
            while(n%i==0)n=n/i;
        }
    }
    if(n>1)for(j=n;j<=m;j=j+n)a[j]=1;
    for(j=1;j<=m;j++)if(a[j]==0)res++;
    cout<<res;
}
