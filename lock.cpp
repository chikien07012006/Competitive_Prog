#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[60];
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,fl=0; cin>>a;
    string n; cin>>n;
    For(i,1,n.size()-2)
    {
        if(n[i]==n[i+1])
        {
            fl=1; break;
        }
    }
    if(fl==1)
    {
        cout<<0; return 0;
    }
    For(i,0,n.size()-1)
    {
        d[n[i]]=1;
    }
    ll t=0;
    For(i,48,57)
    {
        if(d[i]==1)t++;
    }
    if(t<5){cout<<0; return 0;}
    cout<<1;
}
