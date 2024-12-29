#include<bits/stdc++.h>
using namespace std;
long long giaithua(long long n)
{
    long long giaithua=1;
    for(long long i=1;i<=n;i++)
    {
        giaithua=giaithua*i;
    }
    return giaithua;
}
int main()
{
    long long n; cin>>n;
    cout<<giaithua(n);
}
