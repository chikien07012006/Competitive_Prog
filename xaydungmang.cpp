#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll nst=0;
ll st[1000005];
//stack<ll>s;
void xoa()
{
    nst--;
}
void themvao(ll x)
{
    nst++;
    st[nst]=x;
}
ll layra()
{
    return st[nst];
}
int main()
{
    ios_base::sync_with_stdio(0);
        themvao(0);
    ll n; cin>>n;ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
        while(layra()>a[i]) xoa();
        cout<<layra()<<" ";
        themvao(a[i]);
    }
}
