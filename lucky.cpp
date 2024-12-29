#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,l,r,mid,re=0,re1=0,d=0,t,t1,flag=0;
    cin>>n>>k;long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for(long long i=1;i<=n;i++)
    {
        t=k-a[i];if(t==a[i])flag=1;
        l=i+1;r=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<t) l=mid+1;
            if(a[mid]>t) r=mid-1;
            if(abs(a[mid]+a[i])==k) {re=mid;r=mid-1;}
        }
        l=i+1;r=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<t) l=mid+1;
            if(a[mid]>t) r=mid-1;
            if(a[mid]==t) {re1=mid;l=mid+1;}
        }
        if(re!=0&&re1!=0)
            if(flag==0)
        d=d+(re1-re+1);else d=d+(re1-re);flag=0;re=0;re1=0;
                t=0-k-a[i];if(t==a[i]) flag=1;
        l=i+1;r=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<t) l=mid+1;
            if(a[mid]>t) r=mid-1;
            if(abs(a[mid]+a[i])==k) {re=mid;r=mid-1;}
        }
        l=i+1;r=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<t) l=mid+1;
            if(a[mid]>t) r=mid-1;
            if(a[mid]==t) {re1=mid;l=mid+1;}
        }
        if(re!=0&&re1!=0)
        if(flag==0)
        d=d+(re1-re+1);else d=d+(re1-re);flag=0;re=0;re1=0;
    }
    cout<<d;
}
/*26 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 -1 -1 -1 -1 -1 1 1 1*/
