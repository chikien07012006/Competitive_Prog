#include<bits/stdc++.h>
using namespace std;
long long gcd(long long n, long long m)
{
    long long t;
    while(n>0)
    {
        t=n;
        n=m%n;
        m=t;
    }
    return m;
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,res=LONG_LONG_MAX,a,b;
    cin>>n;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if((n/i*i)/gcd(i,n/i)==n)
            {
              //res=min(res,i+n/i);

              if(res>=(i+n/i)){res=i+n/i;a=i;b=n/i;}
            }
        }

    }
    cout<<a<<' '<<b;
}
