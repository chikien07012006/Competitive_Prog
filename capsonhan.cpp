#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,x,n;
long long pow(long long a, long long b)
{
    if(b==1){return a;}
    else
    {
        long long s=pow(a,b/2);
        if(b%2==0)
        {
            return (s*s)%10000;
        }
        else
        {
            return (s*s*a)%10000;
        }
    }
}
long long dq(ll n)
{
    if(n==0)return 1;
    if(n%2==1){ll s=dq(n/2+1);cout<<(s%m+pow(x,n/2+1)*s%m)%m;exit(0);}
    else {cout<<(dq(n-1)%m+pow(x,n)%m)%m;exit(0);}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>x>>n>>m;
   // cout<<pow(h,k);
    cout<<dq(n);
}
