#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t;
    cin>>n;
    t=sqrt(n); //cout<<t;
    if(t%2==0) t--;
    for(long long i=t;i>=3;i=i-2)
    {
        if(n%i==0){cout<<n/i; return 0;}
    }
}
