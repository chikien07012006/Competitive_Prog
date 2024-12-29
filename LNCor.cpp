#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t=LONG_LONG_MIN,res=1,flag=0;
    cin>>n;long long a[n];
    for(long long i=1;i<=n;i++) {cin>>a[i];if(t<a[i]){t=a[i];flag=i;}}
    for(long long i=1;i<=n;i++)
    {
        if(i==flag)res=res*(a[i]-1)%170901;
        else res=res*a[i]%170901;
    }
    cout<<res;
}
