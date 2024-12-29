#include<bits/stdc++.h>
using namespace std;
double long long b[1e18];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k;cin>>n>>k;long long a[k],t=k;
    for(long long i=1;i<=k;i++)
    {
        a[i]=1;
        while(t+a[i]<=n)
        {
            t=t+a[i];a[i]=a[i]*2;
        }
    }
    if(t==n){cout<<"YES";for(long long i=k;i>=1;i--)cout<<a[i]<<' ';
    return 0;}cout<<"NO";
}
