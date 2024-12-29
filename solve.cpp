#include<bits/stdc++.h>
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
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;
    cin>>n;
    for(long long i=sqrt(n);i>=1;i--)
    {
        if((i*i+tcs(i)*i)==n){cout<<i; return 0;}
    }
    cout<<-1;
}
