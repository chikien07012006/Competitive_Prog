#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,q;
ll bit[100005];
void updatePoint(int u, int v) {
    int idx = u;
    while (idx <= n) {
        bit[idx] += v;
        idx += (idx & (-idx));
    }
}

void updateRange(int l, int r, int v) {
    updatePoint(l, v);
    updatePoint(r + 1, -v);
}

int sum(int u) {
    int idx = u, ans = 0;
    while (idx > 0) {
        ans += bit[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>q;
    For(i,1,n) {ll x; cin>>x;updatePoint(i,x);
    updatePoint(i+1,-v);
    }
    while(q--)
    {
        ll k; cin>>k;
        if(k==1)
        {
            ll u,v,x; cin>>l>>r>>x;
            updatePoint(l,x);
            updatePoint(r+1,-v);
        }
        if(k==2)
        {
            ll t; cin>>t;
            cout<<sum(r)-sum(l-1)<<endl;
        }
    }
}
