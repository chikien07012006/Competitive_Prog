#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(long long i=a;i<=b;i++);
long long f[10005],s[10005];
signed main()
{
    ios_base::sync_with_stdio(0);
    long long n,sum=0,res=0,re=0; cin>>n; long long a[n+5];
    for(long long i=1;i<=n;i++) cin>>a[i],sum+=a[i];
    for(long long i=1;i<=n;i++)
    {
        long long ma=0,su=0;
        for(long long j=1;j<i;j++)
        {
            if(a[j]<=a[i])
            {
                if(ma<f[j])
                {
                    ma=f[j];
                    su=s[j];
                }
                if(ma==f[j]) su=max(su,s[j]);
            }
        }
        f[i]=ma+1;
        s[i]=su+a[i];  
        re=max(re,f[i]); 
    }
    for(long long i=1;i<=n;i++)
    {
        if(re==f[i]){
            res=max(res,s[i]);
        }
    }
    cout<<sum-res;
}