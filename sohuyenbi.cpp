#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m=20122007;
ll pow(ll n)
{
    if(n==0)return 3;
    ll s=pow(3,n/2);
    if(n%2==0)return (s*s)%m;
    if(n%2==1)return (s*s*3)%m;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=1;cin>>n;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0&&n/i!=i)res=res*(pow(i)-1)%m;res=res*(pow(n/i)-1)%m;
        if(n%i==0&&n/i==i)res=res*(pow(i)-1)%m;
    }
    cout<<res;
}
