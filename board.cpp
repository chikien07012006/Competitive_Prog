#include<bits/stdc++.h>
using namespace std;
long long a[123],b[123];
int main()
{
    ios_base::sync_with_stdio(0);
    long long m,n,res=0;char t;
    cin>>m>>n;
    for(long long i=1;i<=m;i++)
    {
        for(long long i=1;i<=n;i++){cin>>t;a[t]++;}
    }
    for(long long i=1;i<=m;i++)
    {
        for(long long i=1;i<=n;i++){cin>>t;b[t]++;}
    }
    for(long long i=97;i<=122;i++)
    {
        res=res+abs(a[i]-b[i]);
    }
    cout<<res/2;
}
