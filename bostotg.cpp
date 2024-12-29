#include<bits/stdc++.h>
using namespace std;
long long a[1000005],b[1000005],c[1000005];
long long n,res=0,l,r,mid,i,j;
long long ma(long long val,int i,int j)
{
    l=1;r=n;
    long long res=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(mid!=i&&mid!=j)
        {
        if(c[mid]<=val) res=mid,l=mid+1;
        else r=mid-1;
        }
    }
    return res;
}
long long mi(long long val,int i,int j)
{
    l=1;r=n;
    long long res=n+1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(mid!=i&&mid!=j)
        {
         if(c[mid]>=val) res=mid,r=mid-1;
        else l=mid+1;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(i=1;i<=n;i++) {cin>>a[i];b[i]=a[i];c[i]=a[i];}
    sort(c+1,c+1+n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            res=res+mi(a[i]+b[j],i,j)-ma(abs(a[i]-b[j]),i,j)-1;
        }
    }
    cout<<res;
}

