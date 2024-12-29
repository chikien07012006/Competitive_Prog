#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b; cin>>a>>b;
    ll c=__gcd(a,b);
    cout<<(a*b)/c<<endl<<a/c<<' '<<b/c;
}
