#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long tcs(long long n)
{
    long long t=0;
    while(n>0)
    {
        t=t+n%10;
        n=n/10;
    }
    return t;
}
bool kt(long long n)
{
    long long kq=tcs(n),kq1=0,d=0;
    for(long long i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            kq1=kq1+tcs(i);n=n/i; d++;
        }
    }
    if(d==0) return 0;
    if(n>1) kq1=kq1+tcs(n);
    if(kq==kq1) return 1;
    else return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;
    cin>>n;
        for(long long i=n;i<1e9;i++)
    {
        if(kt(i)==1) {cout<<i; return 0;}
    }
}
