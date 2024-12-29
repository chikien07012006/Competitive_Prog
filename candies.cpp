#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll bit[100005],n;
void update(ll i, ll val)
{
    while(i<=n)
    {
        bit[i]+=val;
        i+= (i&(-i));
    }
}
ll update2(ll u)
{
    ll re=0,i=1;
    while(i<=n)
    {
        if(bit[i]>=u)
        {
            bit[i]=bit[i]-u;
            re++;
        }
        i=i+(i&(-i));
    }
    return re;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n; For(i,1,n) {ll x; cin>>x; update(i,x);}
    ll q; cin>>q;
    while(q--)
    {
        ll u; cin>>u;
        cout<<update2(u)<<endl;
    }
}
