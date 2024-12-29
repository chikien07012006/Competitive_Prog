#include<iostream>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define For1(i,a,b) for(ll i=a;i>=b;i--)
const ll base= 499;
const ll mod=1e9+7;
ll ha[100005],ha1[100005],bpow[100005];
string n;
void buildHash()
{
    For(i,1,n.size()-1)
    {
        ha[i]=(ha[i-1]*base+n[i])%mod;
    }
    For1(i,n.size()-1,1)
    {
        ha1[i]=(ha1[i+1]*base+n[i])%mod;
    }
    bpow[0]=1;
    For(i,1,n.size()-1)
    {
        bpow[i]=(bpow[i-1]*base)%mod;
    }
}
ll get(ll i,ll j)
{
    return (ha[j]-ha[i-1]*bpow[j-i+1]%mod+mod)%mod;
}
ll get1(ll i,ll j)
{
    return (ha1[i]-ha1[j+1]*bpow[j-i+1]%mod+mod)%mod;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n; n='#'+n;
    buildHash();
    ll q; cin>>q;
    while(q--)
    {
        ll u,v; cin>>u>>v;
        if(u==v)
        {
            cout<<1<<"\n"; continue;
        }
        if((v+u)%2==0)
        {
            ll t=(v+u)/2;
            if(get(u,t)==get1(t,v))
            {
                cout<<1<<"\n";
            }else{
                cout<<-1<<"\n";
            }
        }else{
            ll t=(v+u)/2;
            if(get(u,t)==get1(t+1,v))
            {
                cout<<1<<"\n";
            }else{
                cout<<-1<<"\n";
            }
        }
    }
}
