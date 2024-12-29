#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define For1(i,a,b) for(ll i=a;i>=b;i--)
const ll base=499;
const ll mod=1e9+7;
ll hatrai[500005],haphai[500005],p[500005];
void build_hash(string n)
{
    const ll t=n.size()-1;
    p[0]=1;
    For(i,1,t)
    {
        p[i]=(p[i-1]*base)%mod;
    }
    For(i,1,t)
    {
        hatrai[i]=(hatrai[i-1]*base+n[i])%mod;
    }
    For1(i,t,1)
    {
        haphai[i]=(haphai[i+1]*base+n[i])%mod;
    }
}
ll get_hash_trai(ll i, ll j)
{
    return (hatrai[j]-hatrai[i-1]*p[j-i+1]%mod+mod)%mod;
}
ll get_hash_phai(ll j, ll i)
{
    return (haphai[i]-haphai[j+1]*p[j-i+1]%mod+mod)%mod;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        bool fl=0;
        string n,n1; cin>>n; n1=n;
        n='#'+n;
        build_hash(n);
        For(i,1,n.size()-1)
        {
         if(n.size()-i<=i-1)
         {
            if(get_hash_trai(i,n.size()-1)==get_hash_phai(i-1,2*i-n.size()))
            {
                fl=1; cout<<n1;
                For1(j,2*i-n.size()-1,1)cout<<n[j];
                cout<<endl;
            }
         }
         if(fl==1) break;
         if(n.size()-1-i<=i-1)
         {
            if(get_hash_phai(i-1,2*i-n.size()+1)==get_hash_trai(i+1,n.size()-1))
            {
                 fl=1; cout<<n1;
                 For1(j,2*i-n.size(),1) cout<<n[j];
                 cout<<endl;
            }
         }
         if(fl==1) break;
        }
        if(fl==0)
        {
            cout<<n1;
            For1(i,n.size()-2,1) cout<<n[i];
            cout<<endl;
        }
        memset(hatrai, 0, sizeof hatrai);
        memset(haphai, 0, sizeof haphai);
        memset(p, 0, sizeof p);
    }
}


