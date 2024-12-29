#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ucln(ll x,ll y)
{
   ll a=x,b=y,t;
    while(a>0)
    {
        t=a;
        a=b%a;
        b=t;
    }
    return b;
}
long long bcnn(long long a,long long b)
{
    return (a*b)/ucln(a,b);
}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<ucln(a,b)<<endl<<bcnn(a,b);
}
