#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct ok{ll b,c;};
bool ss2(ok truoc,ok sau)
{
    return truoc.b<sau.b;
}
bool ss1(ok truoc,ok sau)
{
    return truoc.c<sau.c;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ok a[n+5],d[n+5];for(ll i=1;i<=n;i++){cin>>a[i].b;a[i].c=i;}
    sort(a+1,a+1+n,ss2);d[1].b=0;d[1].c=a[1].c;
    for(ll i=2;i<=n;i++)
    {d[i].c=a[i].c;
        if(a[i].b!=a[i-1].b)d[i].b=i-1;
    else d[i].b=d[i-1].b;
    }
    sort(d+1,d+1+n,ss1);
    for(ll i=1;i<=n;i++)cout<<d[i].b<<' ';
}
