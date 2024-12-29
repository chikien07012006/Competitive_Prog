#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll sa,sb,sc,se;
ll re;
signed main()
{
    ll n; cin>>n; ll a[n+5],b[n+5],c[n+5],e[n+5];
    For(i,1,n)
    {
        cin>>a[i]>>b[i]>>c[i]>>e[i];
        sa=sa+a[i]; sb=sb+b[i]; sc=sc+c[i]; se=se+c[i];
    }
    sa=sa/n; sb=sb/n; sc=sc/n; se=se/n; 
    For(i,1,n)
    {
        if(a[i]>sa&&b[i]>sb&&c[i]>sc&&e[i]>se)
        {
            re++;
        }   
    }
    cout<<re;
}