#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
ll d[500];
ll luythua(ll n,ll k)
{
    ll s=1;
    For(i,1,k)
    {
        s=(s%100*n%100)%100;
    }
    return s;
}
int main()
{
    freopen("LUYTHUA.inp","r",stdin);
    freopen("LUYTHUA.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,k; vo n>>k; n=n%100;
    while(1)
    {
        n=luythua(n,k);
        if(d[n]==1) return 0;
        d[n]=1;
        cout<<n<<' ';
    }
}


