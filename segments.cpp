#include<iostream>
using namespace std;
typedef long long ll;
ll a[10000000],n;
bool kt(long long s,long long i)
{
    ll j=i+1,f=0,flag=0,k;
    while(j<=n)
    {f=0;
        for(k=j;k<=n;k++)
        {
            f=f+a[k];
            if(f==s){break;}if(f>s){flag=1;break;}
        }
        if(flag==1)break;
        j=j+k-j+1;
    }
    if(flag==1)return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll t=0,s=0;cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];t=t+a[i];}
    for(ll i=1;i<=n;i++)
    {
        s=s+a[i];if(t%s==0)
        {
        //cout<<s<<endl;
         if(kt(s,i)==1){cout<<t/s;return 0;}
        }
    }
}
