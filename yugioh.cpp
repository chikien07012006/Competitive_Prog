#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct ok{ll x,y;};
bool ss(ok a,ok b)
{
    if(a.x==b.x)return a.y>b.y;
    return a.x>b.x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m;cin>>n>>m;ok a[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i].x>>a[i].y;
    sort(a+1,a+1+n,ss);
    cout<<a[m].x<<' '<<a[m].y;

}
