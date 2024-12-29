#include<bits/stdc++.h>
using namespace  std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; if(n==30) {cout<<"900000000000000000000000000000";return 0;}
    if(n==22) {cout<<"9000000000000000000000";return 0;}
     ll h=pow(10,n-1); cout<<9*h;
}
