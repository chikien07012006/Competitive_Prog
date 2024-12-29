#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[1000005];
void pt(ll n,ll d[1000005],vector<ll>f)
{
    For(i,2,sqrt(n))
    {
        while(n%i==0)
        {
            if(d[i]==0)f.push_back(i);
            d[i]++; n=n/i;
        }
    }
    if(n>1){d[n]++;
    f.push_back(n);return ;}
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll m; cin>>m;  ll p[m+5],k[m+5];
    For(i,1,m) cin>>p[i]>>k[i];
    ll T=3;
    while(T--)
    {
        ll a,b,re=0; cin>>a>>b;
        For(i,a,b)
        {
            vector<ll>f;
            memset(d,0,sizeof d);
            ll flag=0;
            if(i==1){re++; continue;}
            pt(i,d,f);
            if(f.size()!=0)
            For(j,0,f.size()-1)
            {
                ll fl=0;
                For(z,1,m)
                {
                    if(f[j]==p[z]&&d[f[j]]<=k[z])
                    {
                        fl=1;break;
                    }
                }
                if(fl==0)
                {
                    flag=1; break;
                }
            }
            if(flag==0)re++;
        }
        cout<<re<<endl;
    }
}










