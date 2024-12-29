#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,res=LONG_LONG_MIN;
    cin>>n; long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<=n;i++)
    {
        for(long long j=n;j>i;j--)
        {
            if(j-i<res) break;
            if(a[i]<a[j])
            res=max(res,j-i);

        }
    }
    if(res==LONG_LONG_MIN) cout<<-1;
    else cout<<res;
}
