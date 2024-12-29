#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll bit[100005];
ll n;
int sum(int u) {
    int idx = u, ans = 0;
    while (idx > 0) {
        ans += bit[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}
void updatePoint(int u, int v) {
    int idx = u;
    while (idx <= n) {
            i
        bit[idx] += v;
        idx += (idx & (-idx));
    }
}

void updateRange(int l, int r, int v) {
    updatePoint(l, v);
    updatePoint(r + 1, -v);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll q; cin>>n>>q; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i]; updatePoint(i,a[i]);
    }
    For(i,1,q)
    {
        ll t; cin>>t;
        if(t==1)
        {
            ll u,v,x; cin>>u>>v>>x;
            updateRange(u,v+1,x);
        }
        if(t==2)
        {
            ll l,r; cin>>l>>r;
            cout<<sum(r)-sum(l-1)<<endl;
        }
    }
}
