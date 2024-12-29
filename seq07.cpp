#include<bits/stdc++.h>
using namespace std;
long long b[100001];
int main()
{
    ios
    long long n,res=0;
    cin>>n;long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=3;i<=n;i++)
    {
        b[i]=max(a[i]+a[i-1]+a[i-2],a[i]+a[i-1]+a[i-2]+b[i-3]);
        res=max(res,b[i]);
    }
    cout<<res;
}
