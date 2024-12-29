#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n; long long a[n],d=0,nho=0;
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<=n;i++)
    {
        d=d+(a[i]+nho)/2;
        if((a[i]+nho)%2==0)nho=0;
        else nho=1;
    }
    cout<<d;
}
