#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
long long t[1000000];
int main()
{
    long long n;
    cin>>n; for(long long i=1;i<=n;i++){cin>>a[i];}
    for(long long i=1;i<=n;i++)
    {
        t[i]=max(t[i-2]+a[i],t[i-1]);
    }
    cout<<t[n];
}
