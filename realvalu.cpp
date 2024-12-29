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
    return t/2;
}
int main()
{
    long long n;
    cin>>n;
    while(n>5)
    {
        n=tcs(n);
    }
    cout<<n;
}
