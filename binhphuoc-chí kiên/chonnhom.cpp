#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<string,ll>dem;
map<string,bool>check;
vector<string>xuli;
ll mod=1000000007;
ll x,y,ketqua=0,tam=1;
ll giaithua(ll n)
{
    ll re=1;
    For(i,1,n)
    {
        re=(re*i%mod)%mod;
    }
    return re;
}
void extended(ll a,ll b)
{
    if(b==0)
    {
        x=1;
        y=0;
    }
    else
    {
        extended(b,a%b);
        ll tmp=x;
        x=y;
        y=tmp-(a/b)*y;
    }
}
ll tohop(ll n, ll k)
{
    ll kq=1;
    For(i,n-k+1,n)
    {
        kq=(kq*(i%mod))%mod;
    }
    extended(giaithua(k),mod);
    ll tmp=(x%mod+mod)%mod;
    return ((kq%mod)*(tmp%mod))%mod;
}
ll dp[1005][1005];
signed main()
{
   // freopen("CHONNHOM.inp","r",stdin);
    //freopen("CHONNHOM.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,k,tong=0; cin>>n>>k; string a[n+5];
    For(i,1,n)
    {
        cin>>a[i]; sort(a[i].begin(),a[i].end());
        dem[a[i]]++;
    }
    xuli.push_back("aa");
    For(i,1,n)
    {
        if(check[a[i]]==0) xuli.push_back(a[i]);
        check[a[i]]=1;
    }
    dp[0][0]=1;
    For(i,0,xuli.size()-2)
    {

        For(j,0,k)
        {
            if(dp[i][j]!=0)
            {
                For(t,0,dem[xuli[i+1]])
                {
                    ll tam=tohop(dem[xuli[i+1]],t);
                    ll add=t*(t-1)/2;
                    dp[i+1][j+add]+=dp[i][j]*tam % mod;
                    dp[i+1][j+add]%=mod;
                }
            }
        }
    }
    cout<<dp[xuli.size()-1][k];
}
