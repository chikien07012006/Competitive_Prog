#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll k=1234567;
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n;cin>>n;ll h,re=1;
        for(ll j=1;j<n;j++)
        {
            cin>>h;re=re*h%k;
        }
        cout<<re<<endl;
    }
}


