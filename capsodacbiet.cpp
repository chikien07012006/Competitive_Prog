#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[105],f[50000005];
ll k=1;
bool ktr(ll t)
{
    ll h=t%10;
    while(t>0)
    {
        if(h==t%10);
        else return 1;
        t=t/10;
    }
    return 0;
}
void ok()
{
    For(i,1,2000000)
    {
        if(ktr(i)==0)
        {
            d[k]=i;
            k++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ok();
    k--;
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n)
    {
    cin>>a[i];
        For(j,1,k)
        {
            ll h=d[j]-a[i];
            if(f[h]>0&&a[i]<d[j])
            {
                if(h==a[i]&&f[h]<1) continue;
                re+=f[h];
            }
        }
        f[a[i]]++;
    }
    cout<<re;
}
