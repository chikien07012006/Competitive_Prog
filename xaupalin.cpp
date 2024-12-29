#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[10005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
    ll n,k,t=0,fl=0; cin>>n; ll a[n+5];
    For(i,1,n) {cin>>a[i];if(d[a[i]]==0)t++;d[a[i]]++;}
    cin>>k;
    sort(d+1,d+1+10005,greater<ll>());
    For(i,1,t) cout<<d[i]<<' ';
        For(i,1,t)
        {
            if(k>(d[i]-1))
            {
                k=k-(d[i]-1);continue;
            }
            if(k<=(d[i]-1))
            {
                fl=1; break;
            }
        }
        if(fl==1)
        {
            cout<<t<<endl;continue;
        }
        ll re=t;
        For(i,1,t)
        {
            if(k>0)
            {
                re--; k--;
            }
            if(k==0)
            {
                cout<<re<<endl; break;
            }
        }
        For(i,1,10005)d[i]=0;
    }
}
