#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool kt[10000005];
void sang()
{
    kt[1]=1;
    For(i,2,10000000)
    {
        if(kt[i]==0)
        for(ll j=i*i;j<=10000000;j=j+i)kt[j]=1;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll a,b,re=0; cin>>a>>b;
    For(i,a,b)if(kt[i]==0)cout<<i<<endl;
}





