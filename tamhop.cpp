#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,l,r,mid,d=0,t,res=LONG_LONG_MIN;
    cin>>n; long long a[n],b[n];
    for(long long i=1;i<=n;i++){cin>>a[i];}
    sort(a+1,a+1+n);
    for(long long i=1;i<=n;i++)
    {
        for(long long j=i+1;j<=n;j++)
        {
         l=j+1;r=n; t=a[j]*2-a[i];
         if(t>=a[j]&&t<=a[n])
         {
           while(l<=r)
            {
             mid=(l+r)/2;
                     if(a[mid]<t)l=mid+1;
                     if(a[mid]>t) r=mid-1;
                     if(a[mid]==t){res=max(res,a[i]+a[j]+a[mid]);d++;break;}


           }
         }

         }
    }
    cout<<d<<endl<<res;
}
