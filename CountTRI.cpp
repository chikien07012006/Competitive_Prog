#include<bits/stdc++.h>
using namespace std;
long long a[10000005],b[10000005],c[10000005];
int main()
{
ios_base::sync_with_stdio(0);
    long n,d=0,l=0,r;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=1;i<=n;i++)cin>>c[i];
    long long mid,m1,re1,re2;
    sort(c+1,c+1+n); sort(b+1,b+1+n); sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            l=1;r=n;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(c[mid]>abs(a[i]-b[j])){r=mid-1;}
                if(c[mid]<=abs(a[i]-b[j])){l=mid+1;re1=mid;}
            }
            l=1;r=n+1;re2=n+1;
                while(l<=r)
            {
                mid=(l+r)/2;
                if(c[mid]>=a[i]+b[j]){r=mid-1;re2=mid;}
                if(c[mid]<a[i]+b[j]){l=mid+1;}
            }
            d=d+re2-re1-1;
        }
    }
    cout<<d;
}

