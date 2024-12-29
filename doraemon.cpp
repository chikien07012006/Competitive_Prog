#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct ok{long long x,y;};
bool ss(ok t,ok s)
{
    return t.x<s.x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ok a[n+5];
    for(ll i=1;i<=n;i++){cin>>a[i].x;a[i].y=i;}
    sort(a+1,a+1+n,ss);
    for(ll i=1;i<=n;i++)
    {
        cout<<a[i].y<<' ';
    }
}
