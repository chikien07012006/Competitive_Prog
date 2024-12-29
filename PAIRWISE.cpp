#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
//    freopen("PAIRWISE.inp","r",stdin);
  //  freopen("PAIRWISE.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    stack<ll>s; stack<ll>t;
    s.push(0);t.push(0);
    a[0]=1e18;
    For(i,1,n)
    {
        while(a[s.top()]<=a[i])
        {
            if(a[s.top()]==a[i]) {re++;}
            s.pop();
        }
        if(s.top()==0) ;
        else re++;
        s.push(i);
    }
   for(ll i=n;i>=1;i--)
    {
        while(a[t.top()]<=a[i])
        {
            t.pop();
        }
        if(t.top()==0) ;
        else re++;
        t.push(i);
    }
    cout<<re;
}

