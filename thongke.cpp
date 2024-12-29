#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5],b[n+5],c[n+5],d[n+5];
    double t1=0,t2=0,t3=0,t4=0;
    For(i,1,n)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        t1=t1+a[i];t2=t2+b[i];t3=t3+c[i];t4=t4+d[i];
        if(i==n)
        {
            t1=t1/n;t2=t2/n;t3=t3/n;t4=t4/n;
        }
    }
    For(i,1,n)
    {
        if(a[i]>t1&&b[i]>t2&&c[i]>t3&&d[i]>t4)re++;
    }
    cout<<re;
}



