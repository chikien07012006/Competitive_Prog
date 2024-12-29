#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct abc{ll a,b;};
bool ss(abc truoc,abc sau)
{
    return truoc.a<sau.a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,c,re=0;cin>>n>>c;abc a[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i].a>>a[i].b;
    sort(a+1,a+1+n,ss);
    for(ll i=1;i<=n;i++)cout<<a[i].a<<' '<<a[i].b<<endl;
    for(ll i=1;i<=n;i++)
    {
        if(c<=a[i].a){re++;c=c+a[i].b;}
    }
    cout<<re;
}
