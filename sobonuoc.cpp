#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[1000005];
void sang()
{
    For(i,1,1000000)
    {
            for(ll j=i;j<=1000000;j=j+i) d[j]++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll n,re=0; cin>>n;
    For(i,1,sqrt(n))
    {
        if(n%i==0)
        {
            ll t=n/i;
            if(d[i]==4)re++;
            if(d[t]==4&&t!=i)re++;
        }
    }
    cout<<re;
}





