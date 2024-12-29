#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sang(ll n)
{
    for(ll i=2;i<=sqrt(n);i++)if(n%i==0)return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;if(n<0)cout<<"NO";
    else
    if(n==1)cout<<"NO";
        else
    if(sang(n)==0)cout<<"YES";else cout<<"NO";
}
