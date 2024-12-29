#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long a[10000009];
int main()
{
    ios_base::sync_with_stdio(0);
    long long l,r;cin>>l>>r;
    for(ll i=1;i<=r;i++)
    {
        a[i]=abs(i-a[i]);
        for(ll j=i*2;j<=r;j=j+i)
            a[j]=a[j]+i;
    }
    ll kq=0;
    for(ll i=l;i<=r;i++)kq=kq+a[i];
    cout<<kq;
}
