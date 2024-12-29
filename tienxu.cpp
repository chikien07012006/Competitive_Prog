#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("COINS.INP","r",stdin);
    //freopen("COINS.OUT","w",stdout);
    ll a,b,c; cin>>a>>b>>c;
    if(a>b)swap(a,b);
    ll h=c-(a*(c/a));
    while(h%b!=0)
    {
        h=h+a;
    }
    cout<<h/b+((c-h)/a);
}





