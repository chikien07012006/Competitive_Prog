#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[100005];
void DFS(ll s,vector<ll>a[100000])
{
    for(auto v:a[s])
    {
        if(f[v]==0)
        {
            f[v]=1;
            DFS(v,a);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll q; cin>>q;
    while(q--)
    {
        ll n,m,fl=0; cin>>n>>m; vector<ll>a[n+5];
        For(i,1,m)
        {
            ll l,r; cin>>l>>r;
            a[l].push_back(r);
        }
        For(i,1,n)
        {
            if(a[i].size()==0)
            {
                fl=1; break;
            }
            if(a[i].size()==1)
            {
                ll z=a[i][0];
                if(a[z].size()==1)
                {
                    ll q=a[z][0];
                    if(q==i)
                    {
                        fl=1; break;
                    }
                }
            }
        }
        if(fl==1)cout<<"YES"<<endl;
        else
        {
            ll flag=0;
            DFS(1,a);
            For(i,1,n)
            {
                if(f[i]==0)
                {
                    flag=1; break;
                }
            }
            if(flag==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            For(i,1,100005)f[i]=0;
        }
    }
}





