#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t=0,t1=0,res=0;
    cin>>n; long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<=n;i++)
    {
        for(long long j=i;j<=n;j++)
        {
            t++;
            if(t%3==0){t1=t1+a[j];res=max(res,t1);}
            else t1=t1+a[j];
        }
        t=0;t1=0;
    }
    cout<<res;
}
