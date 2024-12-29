#include<bits/stdc++.h>
using namespace std;
long long d[10001];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t=LONG_LONG_MIN;
    cin>>n;long long m=4*n; long long a[m];
    for(long long i=1;i<=m;i++){cin>>a[i];d[a[i]]++;t=max(t,a[i]);}
    sort(a+1,a+1+4*n);
    for(long long i=1;i<=t;i++)
    {
        if(d[i]%2==1){cout<<"NO";return 0;}
    }
    for(long long i=2;i<=n*2;i++)
    {
        if(a[1]*a[4*n]!=a[i]*a[4*n-i+1]){cout<<"NO";return 0;}
    }
    cout<<"YES";
}
