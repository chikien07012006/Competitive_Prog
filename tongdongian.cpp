#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    ll t=(n+1)*n/2;
    if(n%2==0)
    {
        ll t1=(n+2)*(n/2)/2;
        cout<<t-2*t1;
    }
    else
    {
        ll t1=(n+1)*(n/2)/2;
        cout<<t-2*t1;
    }
}



