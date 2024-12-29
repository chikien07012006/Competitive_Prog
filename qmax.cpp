#include<iostream>
using namespace std;
typedef long long ll;
ll d[100];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m;
    cin>>n>>m;ll a[n*m];
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            cin>>a[(j-1)*n+i];
        }
    }
    //for(ll i=1;i<=n*m;i++)cout<<a[i]<<' ';
 // cout<<endl;//  return 0;
    for(ll i=1;i<=n;i++)
    { ll t=i;d[i]=a[i],s=0;
        for(ll j=2;j<=m;j++)
        {
            if(t==1)
            {
            if(a[(j-1)*n+t]>a[j-1)*n+t+1]){s=s+}
            }
            else
            {
                if(t==n){ if(d[i]<a[i]+d[(j-1)*n+t-1]){d[i]=d[(j-1)*n+t-1];t=t-1;}
            if(d[i]<d[(j-1)*n+t]){d[i]=d[(j-1)*n+t-1];}}
            else
            {
              if(d[i]<d[(j-1)*n+t-1]){d[i]=d[(j-1)*n+t-1];t=t-1;}
            if(d[i]<d[(j-1)*n+t]){d[i]=d[(j-1)*n+t-1];}
            if(d[i]<d[(j-1)*n+t+1]){d[i]=d[(j-1)*n+t-1];t=t+1;}
            }
            }
        }
        //cout<<d[i];return 0;
    }
    for(ll i=1;i<=n;i++)cout<<d[i]<<endl;
}
