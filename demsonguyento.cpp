    #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[200000005],k[200000005];
void sang()
{
    f[1]=1;
    for(ll i=4;i<=2*100000000;i=i+2)f[i]=1;
    for(ll i=3;i<=2*100000000;i=i+2)
    {
        if(f[i]==0)
        {
            for(ll j=i*i;j<=2*100000000;j=j+i)f[j]=1;
        }
    }ll d=0;
    for(ll i=1;i<=2*100000000;i++)
    {
        if(f[i]==0)d++;
        k[i]=d;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll l,r,n;cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>l>>r;cout<<k[r]-k[l-1]<<endl;
    }
}
