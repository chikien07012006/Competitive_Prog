#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[10000005];
void sang()
{
    d[1]=1;
    d[0]=1;
    For(i,2,sqrt(10000000))
    {
        if(d[i]==0)
        {
            for(ll j=i*i;j<=10000000;j=j+i)d[j]=1;
        }
    }
}
int main()
{
    sang();
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    while(n--)
    {
        ll k; cin>>k;
        if(d[k]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
