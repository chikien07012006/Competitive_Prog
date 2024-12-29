#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[20];
ll m=0;
void them(ll n)
{
    while(n>0)
    {
        a[++m]=n%10;
        n/=10;
    }
}
ll tong(ll x, ll y)
{
    ll re=0;
    For(i,x,y) re+= a[i];
    return re;
}
int main()
{
    freopen("EQUAL.INP","r",stdin);
    freopen("EQUAL.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,dangxet=1; cin>>n;
    them(n);
    while(1)
    {
        int xuli;
        For(i,a[dangxet]+1,9)
        {
            if(m%2==1) xuli=tong(m/2+2,m)-tong(dangxet+1,m/2)-i;
            if(m%2==0) xuli=tong(m/2+1,m)-tong(dangxet+1,m/2)-i;
            if(dangxet>=m/2+1)
            {
                a[dangxet]=i;
                if(m%2==0)xuli=tong(dangxet,m);
                if(m%2==1)xuli=tong(dangxet+1,m);
            }
            if(dangxet==m) xuli=a[dangxet];
            if(xuli<0) break;
            if(xuli>(dangxet-1)*9) continue;
            a[dangxet]=i;
            For(j,1,dangxet-1)
            {
                a[j]=min(xuli,9);
                xuli-=min(xuli,9);
            }
            for(ll j=m;j>=1;j--) cout<<a[j];
            return 0;
        }
        dangxet++;
        if(dangxet==m+1) a[++m]=0;
    }
}
