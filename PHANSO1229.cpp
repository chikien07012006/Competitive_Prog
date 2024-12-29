#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
struct ok{long long a,b; long double c;};
bool ss(ok trc,ok sau)
{
    if(trc.c==sau.c) return trc.a<sau.a;
    return trc.c<sau.c;
}
int main()
{
    freopen("PHANSO1229.inp","r",stdin);
    freopen("PHANSO1229.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,x,y,m=1; vo n; ll b[n+5],c[n+5]; ok a[n+5];
    For(i,1,n) vo b[i];
    For(i,1,n) vo c[i];
    For(i,1,n)
    {
        if(b[i]==0)continue;
        a[m].a=b[i];
        a[m].b=c[i];
        a[m].c=double(b[i])/double(c[i]);
        m++;
    }
    m--;
    sort(a+1,a+1+m,ss);
    For(i,1,m)cout<<a[i].a<<' ';
    cout<<endl;
    For(i,1,m)cout<<a[i].b<<' ';
}


