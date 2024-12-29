#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,t;
    cin>>n>>k; long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    long long l=1,r=n;
    while(l<=r)
    {
        t=(l+r)/2;
        if(a[t]==k)
        {
            cout<<t; return 0;
        }
        if(a[t]<k)
        {
            l=t+1;
        }
        if(a[t]>k)
        {
            r=t-1;
        }
    }
    cout<<-1;
}
