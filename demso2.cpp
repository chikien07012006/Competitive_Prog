#include<iostream>
using namespace std;
typedef long long ll;
ll f[100010],d[100010];
void nt()
{
    for(ll i=2;i<=100000;i++)
    {
        if(f[i]==0)
        {d[i]++;
            for(ll j=i*i;j<=100000;j=j+i)
            {
                if(f[j]==0)
                {f[j]=1;d[i]++;}
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    nt();
    ll t,n;cin>>t;
    for(ll i=1;i<=t;i++){cin>>n;cout<<d[n]<<endl;}
}
