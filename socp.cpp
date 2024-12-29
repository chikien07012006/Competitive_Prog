#include<bits/stdc++.h>
using namespace std;
long long d[400000];
void pt(long long x)
{
    for(long long i=2;i<=sqrt(x);i++)
    {
        while(x%i==0)
        {
            x=x/i; d[i]++;
        }
    }
    if(x>1) d[x]++;
}
int main()
{
    long long n,s=1;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        pt(i);
    }
    for(long long i=1;i<=n;i++)
    {
        if(d[i]>1)
        {
            if(d[i]%2==0)
            {
                for(long long j=1;j<=d[i];j++)
                {
                    s=s*i%1000000007;
                }
            }
            else
            {
                for(long long j=1;j<=d[i]-1;j++)
                {
                    s=s*i%1000000007;
                }
            }
        }
    }
    cout<<s;
}
