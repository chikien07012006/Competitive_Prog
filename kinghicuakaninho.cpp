#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100009],b[100009],c[100009],x[100009],y[100009],z[100009];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i]>>c[i];
    x[1]=a[1];y[1]=b[1];z[1]=c[1];
    for(int i=2;i<=n;i++)
    {
        x[i]=max(y[i-1],z[i-1])+a[i];
        y[i]=max(x[i-1],z[i-1])+b[i];
        z[i]=max(y[i-1],x[i-1])+c[i];
    }
    cout<<max(x[n],max(y[n],z[n]));
}
