#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[100000000];
bool kt(ll n)
{
    if(n<2)return false;
    for(ll i=2;i<=sqrt(n);i++){if(n%i==0)return true;}
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    if(kt(n)==false){cout<<n-1;return 0;}
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {

        }
    }
}
