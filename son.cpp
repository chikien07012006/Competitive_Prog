#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll a,b,c,re=8; cin>>a>>b>>c;
    if(a==1&&b==1&&c==1){cout<<1;return 0;}
    re=re+(a-2)*(b-2)*2+2*(a-2)*(c-2)+2*(b-2)*(c-2)+(a-2)*4+(b-2)*4+(c-2)*4;
    cout<<re;

}




