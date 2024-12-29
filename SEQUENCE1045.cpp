#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
unordered_map<ll,ll>d;
int main()
{
    freopen("SEQUENCE1045.inp","r",stdin);
    freopen("SEQUENCE1045.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll T; vo T;
    while(T--)
    {
        ll n,m,re=1,re1=1,t=1e9+7,x; vo n>>m;
        For(i,1,n) vo x,re=(re%t*x%t)%t;
        For(i,1,m) vo x,re1=(re1%t*x%t)%t;
        if(re==re1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
