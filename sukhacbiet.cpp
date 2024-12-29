#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,k,muctieu;
ll a[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>k;
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    ll i=1,j=n;
    a[0]=a[n+1]=-1;
    while(1)
    {
        while(a[i+1]==a[i])i++;
        while(a[j-1]==a[j])j--;
        if(i>=j)
        {
            cout<<0; return 0;
        }
        if(k<min(i,n-j+1))
        {
            cout<<a[j]-a[i];return 0;
        }
        if(i<n-j+1)
        {
            muctieu=min(a[i+1],a[i]+k/i);
            k=k-(muctieu-a[i])*i;
            a[i]=muctieu;
        }
        else
        {
            muctieu =max(a[j-1],a[j]-k/(n-j+1));
            k=k-(a[j]-muctieu)*(n-j+1);
            a[j]=muctieu;
        }
    }
}



