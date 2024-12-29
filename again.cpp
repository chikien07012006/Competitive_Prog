#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[1000005];
void sang(ll n)
{
    For(i,2,n)
    {
        if(d[i]==0)
        for(ll j=i*i;j<=n;j=j+i) d[j]=1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n;
    sang(n);
    For(i,2,n)
    {
        if(d[i]==0&&d[i+2]==0&&(i+2)<=n)
        {
            re++;
        }
    }
    cout<<re<<endl;
    For(i,2,n)
    {
        if(d[i]==0&&d[i+2]==0&&(i+2)<=n)
        {
            cout<<2<<' '<<i<<endl;
        }
    }
}
