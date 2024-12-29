#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[100],t=0;
ll lay()
{
    return a[t];
}
void them(ll n)
{
    t++;
    a[t]=n;
}
void xoa()
{
    t--;
}
int main()
{
    freopen("stack.inp","r",stdin);
    freopen("stack.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    For(i,1,n)
    {
        ll b; cin>>b;
        if(b==1)
        {
            if(t<=0)
            {
                cout<<-1;return 0;
            }
            cout<<lay()<<' ';
            xoa();
            For(j,1,t) cout<<a[j]<<' ';
            cout<<endl;
        }
        else
        {
            ll k; cin>>k; them(k);
            For(j,1,t) cout<<a[j]<<' ';
            cout<<endl;
        }
    }
}


