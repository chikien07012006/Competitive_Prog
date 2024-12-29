#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m;
long long pow(long long a, long long b)
{
    if(b==1){return a;}
    else
    {
        long long s=pow(a,b/2);
        if(b%2==0)
        {
            return (s*s)%m;
        }
        else
        {
            return (s*s*a)%m;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll x,y,n;cin>>x>>y>>n>>m;
    cout<<((pow(x,n)%m-pow(y,n)%m)+m)%m;
}
