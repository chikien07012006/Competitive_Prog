#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,m,re=0;
ll a[100],b[100];
ll tong[100];
void sinh(ll i,ll n,ll sum1,ll sum2)
{
    For(j,0,2)
    {
        cout<<i<<':'<<j<<' ';
        if(j==1)sum1=sum1+a[i];
        if(j==2)sum2=sum2+a[i];
        if(sum1==sum2)
        {
            re++; //cout<<i<<' '<<sum1<<' '<<sum2<<endl;
        }
        if(tong[i+1]+min(sum1,sum2)>=max(sum1,sum2)&&i<n)
        {
            sinh(i+1,n,sum1,sum2);
        }
        if(j==1)sum1=sum1-a[i];
        if(j==2)sum2=sum2-a[i];
    }
           cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,n) cin>>a[i];
    for(ll i=n;i>=1;i--) tong[i]=tong[i+1]+a[i];
    sinh(1,n,m,0);
    cout<<re;
}




