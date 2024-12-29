#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[34];
void xl()
{a[1]=2;a[2]=3;a[3]=5;
    for(ll i=4;i<=34;i++)a[i]=a[i-1]+a[i-2]+a[i-3];
}
int main()
{
    ios_base::sync_with_stdio(0);
    xl();ll n,t;cin>>n;
    for(ll k=1;k<=n;k++)
   {cin>>t;ll flag=0;
     for(ll i=1;i<=34;i++)
    {ll t1=t;//if(a[i]>t){cout<<"Case"<<' '<<"#"<<k<<":"<<' '<<-1<<endl;flag=1;break;}
        for(ll j=i;j<=34;j++)
        {
            if(t1<0){break;}t1=t1-a[j];
            if(t1==0){cout<<"Case"<<' '<<"#"<<k<<":"<<' '<<j-i+1<<endl;flag=1;break;}
        }
        if(flag==1){break;}
    }
    if(flag==0)cout<<"Case"<<' '<<"#"<<k<<":"<<' '<<-1<<endl;
   }
}
