#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll b,n,k,t;
    cin>>t>>b>>n>>k;ll a[n];
    a[1]=t%k;a[2]=b%k;
    for(ll i=3;i<=n;i++)
    {
      a[i]=(a[i-1]%k*a[i-2]%k)%k;
    }
    cout<<a[n]%k;
}
