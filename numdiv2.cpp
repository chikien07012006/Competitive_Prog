#include<bits/stdc++.h>
using namespace std;
long long a[5000000],b[5000000];
void snt()
{
    for(long long i=2;i<=5000000;i++)if(a[i]==0)for(long long j=i*i;j<=5000000;j=j+i)if(a[j]==0)a[j]=i;
    for(long long i=2;i<=5000000;i++) if(a[i]==0) a[i]=i;
}
int main()
{
    ios_base::sync_with_stdio(0);
    snt();
    long long n,t,s=1;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>t;
        while(t>1)
        {
            b[a[t]]++;
            t=t/a[t];
        }
    }
    for(long long i=2;i<=5000000;i++)
    {
       s=s*(b[i]+1)%1000000007;
    }
    cout<<s;
}
