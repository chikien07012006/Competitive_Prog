#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ll t=n+1;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){t=t+i;if(n/i!=i)t=t+n/i;else;}
    }
    if(t==2*n)cout<<"YES";
    else cout<<"NO";
}
