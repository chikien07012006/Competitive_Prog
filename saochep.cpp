#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll x,y; cin>>x>>y;
    if(y==1&&x!=0){cout<<"No";return 0;}
    if(y==0) {cout<<"No";return 0;}
    ll h=y-1;
    if(h%2==x%2&&h<=x) cout<<"Yes";
    else cout<<"No";
}
