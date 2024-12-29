#include<bits/stdc++.h>
using namespace std;
    long long lt(long long a, long long n, long long m)
    {

        if(n==1) return  a;
        if(n==0) return 1;
        else{
        long long s=lt(a,n/2,m);
        if(n%2==0){return (s%m*s%m)%m;}
        if(n%2==1){return (s%m*s%m*a%m)%m;}}
    }
signed main()
{
    ios_base::sync_with_stdio(0);
    long long a,m,b,n,k; cin>>a>>m>>b>>n>>k;
    long long u=lt(a,m,k),v=lt(b,n,k);cout<<lt(u,v,k);
}
