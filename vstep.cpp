#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,k;
    cin>>n>>k; long long a[n];
    for(long long i=1;i<=n;i++) a[i]=-1;
    a[2]=1; a[1]=1;
    for(long long i=1;i<=k;i++){cin>>t; a[t]=0;}
    for(long long i=3;i<=n;i++)
    {
        if(a[i]==0) a[i]=0;
        else a[i]=a[i-1]+a[i-2]%14062008;
    }
    cout<<a[n]%14062008;
}
