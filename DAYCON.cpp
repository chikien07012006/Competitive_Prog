#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[1000005];
void sang()
{
    d[1]=1;d[0]=1;
    For(i,2,1000000)
    {
        if(d[i]==0)
        {
        for(ll j=i*i;j<=1000000;j=j+i)
            d[j]=1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll a,b,fl=0,re=0; cin>>a>>b;
    fl=a-1;
    For(i,a,b)
    {
        if(d[i]==0&&fl==0)
        {
            re=max(re,i-fl-1);
            fl=i; continue;
        }
        if(d[i]==0&&fl!=0)
        {
            re=max(re,i-fl-1);
            fl=i;
        }
        if(i==b)
        {
            re=max(re,b-fl);
        }
    }
    cout<<re;
}
