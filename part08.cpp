#include<bits/stdc++.h>
using namespace std;
long long m=1e9;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,res=0;
    cin>>n; long long a[n];
    for(long long i=1;i<=n;i++) {cin>>a[i];
    a[i]=a[i]%m;
    res=res+a[i];}
    cout<<res%m+7;
}

