#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,d=0,t=0;cin>>n;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ll j=n/i;
            if(i!=j){d=d+2;t=t+i+j;}
            if(i==j){d++;t=t+i;}
        }
    }
    cout<<d<<' '<<t;
}
