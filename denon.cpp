#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005],b[100005],c[100005],d[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll m,n,k,x,y;cin>>m>>n>>k;
    for(ll i=1;i<=k;i++)
    {
        cin>>x>>y;
        a[i]=x,b[i]=y;
    }
    sort(a+1,a+1+k);sort(b+1,b+1+k);
    ll d=1,d1=1;
    for(ll i=1;i<k;i++)
    {
     if(a[i]!=a[i+1])  d++;
    }
    for(ll i=1;i<k;i++)
    {
     if(b[i]!=b[i+1])  d1++;
    }
    cout<<(m-d)*(n-d1);
}
