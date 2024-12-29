#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
string n;
const ll base=499;
const ll MOD = 1e9 + 7;
ll p[1000005],Hash[1000005];
void build_hash()
{
    ll t=n.size()-1;
    p[0]=1;
    For(i,1,t)
    {
        p[i]=p[i-1]*base%MOD;
    }
    For(i,1,t)
    {
        Hash[i]=(Hash[i-1]*base+n[i])%MOD;
    }
}
ll getHash(ll i, ll j)
{
    return (Hash[j]-Hash[i-1]*p[j-i+1]%MOD+MOD)%MOD;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    n='#'+n;
    build_hash();
    For(i,1,n.size()-1)
    {
        ll t=getHash(1,i);
        ll j=i;
        bool fl=0;
        while(j<=n.size()-1)
        {
            ll k=getHash(j-i+1,j);
            if(k==t);
            else
            {
                fl=1; break;
            }
            j=j+i;
        }
        j=j-i;
        ll k=getHash(j+1,n.size()-1);
        ll k1=getHash(1,n.size()-j-1);
        if(k!=k1)fl=1;
        if(fl==0)cout<<i<<' ';
    }
}



//abcabca
