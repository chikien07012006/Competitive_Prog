#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define For(i,a,b) for(ll i=a;i<=b;i++)
long long a[20]={0,1,5,12,12,15,21,30,32,37,45};
signed main()
{
    ios_base::sync_with_stdio(0);
    long long n; cin>>n;
    cout<<n/10*45+a[n%10];

}