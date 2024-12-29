#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[15];
vector<ll>h;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,vt=0; cin>>n>>m; ll a[n+5],b[m+5];
    For(i,1,n) cin>>a[i];
    For(i,1,m) cin>>b[i];
    sort(a+1,a+1+n);
    For(i,1,n)
    {
        if(a[i]!=0)
        {
            vt=i; break;
        }
    }
 //   cout<<vt;
    if(vt==0) cout<<0<<endl;
    else
    {
        cout<<a[vt];
        For(i,1,n)
        {
            if(i!=vt)
            {
                cout<<a[i];
            }
        }
        cout<<endl;
    }
    For(i,1,n) {if(d[a[i]]==0)h.push_back(a[i]); d[a[i]]=1;}
    For(i,1,m) {if(d[b[i]]==0)h.push_back(b[i]); d[b[i]]=1;}
    sort(h.begin(),h.end(),greater<ll>());
    For(i,0,h.size()-1) cout<<h[i];
}
