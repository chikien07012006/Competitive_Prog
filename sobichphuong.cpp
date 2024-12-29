#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    for(ll i=n*(n-1)+1;i>=1;i=i-n)
    {
        long h=sqrt(i);
        if(h*h==i){cout<<i;return 0;}
    }
}
