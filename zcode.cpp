#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
ll d[125],m;
ll s[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("zcode.INP","r",stdin);
    //freopen("zcode.OUT","w",stdout);
    string n,q; cin>>n;
    ll z,k=97,re=1e18;
     For(i,0,25)
    {
       cin>>z;
        d[k]=z;
        k++;
    }
    cin>>m;
    ll l=1,r=1,t=0;
    For(i,0,n.size()-1) cout<<d[n[i]]<<' ';
    cout<<endl;
    while(l<=r&&r<=n.size()-1)
    {
        if(t<=m)
        {
            t=t+d[n[r]];
            r++;
            continue;
        }
        if(t>m)
        {
            t=t-d[n[l]];
            l++;
            re=min(r-l+1,re);
        }
    }
    n=' '+n;
    For(i,1,n.size()-1)s[i]=s[i-1]+d[n[i]];
    For(i,1,n.size()-1)
    {
        if(s[i+re-1]-s[i-1]>m)
        {
            string b;
            For(j,i,i+re-1)b=b+n[j];
            cout<<b; return 0;
        }
    }
}


