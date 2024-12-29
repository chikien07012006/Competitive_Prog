#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,d=0,t,t1;
    cin>>n>>k; long long a[n];
    for(int i=1;i<=n;i++) cin>>a[i];
    t=n;
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        while(a[i]+a[t]>k&&t>i)
        {
            t--;
        }
        t1=t;
        while(a[i]+a[t1]==k&&t1>i)
        {
            d++;
            t1--;
        }
    }
    cout<<d;
}

