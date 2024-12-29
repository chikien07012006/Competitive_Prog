#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll thuaso[5000005];
ll nto[5000005];
void sang()
{
    For(i,2,5000005)
    {
        if(nto[i]==0)
        {
            nto[i]=i;
            for(ll j=i*i;j<=5000005;j+=i)
            {
                if(nto[j]==0) nto[j]=i;
            }
        }
    }
}
void phantich(ll n)
{
    thuaso[1]=1;
    while(n>1)
    {
        ll t=nto[n];
        while(n%t==0)
        {
            thuaso[t]++;
            n=n/t;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    sang();
    ll n; cin>>n;
    For(i,1,n) phantich(i);
    vector<ll>xuli;
    xuli.push_back(1);
    For(i,1,20)
    {
        if(thuaso[i]>1)
        {
            For(j,1,thuaso[i])
            {
                if(pow(i,j)>n)
                {
                    thuaso[i]=j-1;
                }
            }
        if(thuaso[i]>1)xuli.push_back(i);
        }
    }

    ll u=0;
    while(1)
    {
        For(i,1,thuaso[xuli[u]])
        {
            ll v=0;
            while(1)
            {
                For(j,1,thuaso[xuli[v]])
                {
                    ll h=0;
                   while(1)
                   {
                        For(k,1,thuaso[xuli[h]])
                        {
                            cout<<xuli[u]<<' '<<xuli[v]<<' '<<xuli[h]<<':';
                            cout<<i<<' '<<j<<' '<<k<<endl;
                        }
                        h++;
                        if(h==xuli.size()) break;
                   }
                }
                v++;
                if(v==xuli.size()) break;
            }
        }
        u++;
        if(u==xuli.size()) break;
    }
}
