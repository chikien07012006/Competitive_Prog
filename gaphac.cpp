#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n)
{
    ll h=sqrt(n);
    if(h*h==n)return 1;
    else return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll t; cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n,m,re=1e18;cin>>n>>m;
        ll t=n*m;
        for(ll j=1;j<=sqrt(t);j++)
        {
            if(t%j==0)
            {
                if(check(j)==1)re=min(re,t/j);
                if(check(t/j)==1)re=min(re,j);
            }
        }
        cout<<re<<endl;
    }
}
