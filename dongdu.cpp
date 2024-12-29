#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b,c; cin>>a>>b>>c;
    cout<<abs(__gcd(a-b,b-c));
}



