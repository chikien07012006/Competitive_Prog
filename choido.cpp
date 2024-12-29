#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        ll l,r,n; cin>>l>>r>>n;
        ll t=r-l+1;
        t=t*(t+1)/2;
        ll u,v;
        For(i,l,r)
        {
            if(i%n==0){u=i;break;}
        }
        for(ll i=r;i>=l;i--)
        {
            if(i%n==0){v=i;break;}
        }
        ll h=(v-u)/n+1;
        h=h*(h+1)/2;
        cout<<t-h<<endl;
    }
}


