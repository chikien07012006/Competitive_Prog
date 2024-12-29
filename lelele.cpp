#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll k=1000000007;
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n;cin>>n;
        ll h=(n+1)%k;
        ll h1=(h%k)*(n%k)%k;
        cout<<(h1%k-n%k+k)%k<<endl;
    }
}
