#include<bits/stdc++.h>
using namespace std;
long long a[100];
long long d[1000007];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t,l,r,res=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        t=a[i];a[i]=0;
        r=(i+t%n+1)%n;
        if(r==0) r=n;
        l=((i-t%n-1)+n)%n;
        res=max(res,max(a[l],a[r])+t/n);
        a[i]=t;
    }
    cout<<res;
}

