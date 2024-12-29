#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll nto[1000005];
void sang()
{
    nto[1]=1;
    For(i,2,1000000)
    {
        if(nto[i]==0)
        {
            for(ll j=i*i;j<=1000000;j=j+i) nto[j]=1;
        }
    }
}
vector<ll>xuli;
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    sang();
    ll n,l,r,re=0; cin>>n>>l>>r; ll a[n+5];
    xuli.push_back(0);
    For(i,1,n)
    {
        cin>>a[i];
        if(nto[a[i]]==0)
        {
            xuli.push_back(i);
        }
    }
    xuli.push_back(n+1);
 //   For(i,0,xuli.size()-1) cout<<xuli[i]<<' ';
   // cout<<endl;
    For(i,1,xuli.size()-1-l)
    {
        ll tam=xuli[i+r]-xuli[i+l-1];
        //cout<<tam; return 0;
        if(i+r>xuli.size()-1)
        {
            tam=n+1-xuli[i+l-1];
            //cout<<tam; return 0;
        }
        re=re+(xuli[i]-xuli[i-1])*tam;
    }
    cout<<re;
}
