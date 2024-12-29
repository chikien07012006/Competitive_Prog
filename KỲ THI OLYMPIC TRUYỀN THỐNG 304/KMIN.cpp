#include<bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    long long n; cin>>n; long long a[n+5];
    for(long long i=1;i<=n;i++) cin>>a[i];
    a[0]=0;
    sort(a+1,a+1+n);
    for(long long i=1;i<=n;i++)
    {
        if(a[i]-a[i-1]>=2)
        {
            cout<<a[i-1]+1; return 0;
        }
    }
    cout<<a[n]+1;
}