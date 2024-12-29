#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
bool kt(ll n)
{
    if(n<2) return 0;
    if(n<=3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(ll i=5;i<=sqrt(n);i=i+6)
    {
        if(n%i==0||n%(i+2)==0) return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    ll n; cin>>n; n++;
    while(kt(n)!=1)
    {
        n++;
    }
    cout<<n;
}

