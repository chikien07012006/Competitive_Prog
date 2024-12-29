#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
int main()
{
    freopen("AOAM.inp","r",stdin);
    freopen("AOAM.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,t=0,t1=0; vo n; ll a[n+5];
    For(i,1,n) vo a[i],t=t+a[i];
    For(i,1,n)
    {
        t1=t1+a[i];
        if(t%t1==0)
        {
            ll t2=0,fl=0;
            For(j,i+1,n)
            {
                t2=t2+a[j];
                if(t2==t1) t2=0;
                if(t2>t1){fl=1;break;}
            }
            if(fl==0) {cout<<t/t1;return 0;}
        }
    }
    cout<<1;
}

