#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>xuli;
ll check[5000005];
void sang(ll n)
{
    For(i,2,n)
    {
        if(check[i]==0)
        {
            xuli.push_back(i);
            for(ll j=i*i;j<=n;j+=n)
            {
                check[j]=1;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; cout<<n; return 0;
    
}