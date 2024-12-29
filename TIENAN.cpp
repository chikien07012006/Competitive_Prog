#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    freopen("TIENAN.inp","r",stdin);
    freopen("TIENAN.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll T; cin>>T; while(T--)
    {
    stack<ll>s;
    stack<ll>t;
    ll n,re=0,u=0,v=0; cin>>n; ll a[n+5],b[n+5],c[n+5];
    For(i,1,n) cin>>a[i];
    s.push(0);t.push(0);
    a[0]=0;
    For(i,1,n)
    {
        while(a[s.top()]>=a[i])s.pop();
        if(a[s.top()]==0)
        {
            b[i]=0;ý
        }
        else
        {
            b[i]=s.top();
        }
        s.push(i);
    }
    for(ll i=n;i>=1;i--)
    {
        while(a[t.top()]>=a[i])t.pop();
        if(a[t.top()]==0)
        {
            c[i]=n+1;
        }
        else
        {
            c[i]=t.top();
        }
        t.push(i);
    }
    For(i,1,n)
    {
        if(a[i]*(c[i]-b[i]-1)>re)
        {
            re=a[i]*(c[i]-b[i]-1);
            u=b[i]; v=c[i];
        }
        if(a[i]*(c[i]-b[i]-1)==re)
        {
            if(b[i]<u)
            {
                u=b[i]; v=c[i];
            }
        }
    }
    cout<<re<<' '<<u+1<<' '<<v-1<<endl;
    }
}




