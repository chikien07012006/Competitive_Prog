#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>xl;
map<ll,ll>luu;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,t,ht=1,dathem=0,tmp,tmp1; cin>>n>>t; ll a[n+5],k[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,t) cin>>k[i],xl.push_back(k[i]);
    n+=1; a[n]=0;
    sort(a+1,a+1+n);
    sort(xl.begin(),xl.end());
    For(i,0,xl.size()-1)
    {
        while(ht<=n&&dathem<xl[i])
        {
            tmp1=dathem;
            dathem+=(a[ht+1]-a[ht]-1);
            tmp=a[ht];
            ht++;
        }
        ll cc=xl[i]-tmp1;
        luu[xl[i]]=tmp+cc;
    }
    For(i,1,xl.size())
    {
        cout<<luu[k[i]]<<endl;
    }
}
