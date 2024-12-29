#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,s,q,fl=0; cin>>n>>s; ll a[n+5];
    For(i,1,n) cin>>a[i];
    cin>>q;
    if(q==0)
    {
    For(i,1,n)
    {
        if(a[i]!=0)fl=1;
    }
    if(fl==0) {cout<<s*s;return 0;}
    ll t=0,vt,re=0,o=0;
        For(i,1,n)
        {
            if(a[i]>t)
            {
                t=a[i]; vt=i;
            }
        }
        For(i,1,n)
        {
            o=o+a[i];
            if(i!=vt)
            {
                re=re+a[i]*a[i];
            }
        }

        ll f=s-o;
        ll m=a[vt]+f;
        re=re+m*m;
        cout<<re;
    }
}
hôm bữa ngồi chơi t bóp cổ thằng hô cái bả thấy




