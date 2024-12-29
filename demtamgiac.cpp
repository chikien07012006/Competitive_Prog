#include<iostream>
using namespace std;
typedef long long ll;
ll k=1000000007;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,d=0;
    cin>>n;
    if(n%2==0)d=1;
    else d=0;
    ll h=n-1-n/2;
    ll t=((h/2*(h-1)/2)*2)%k+h%k+1;
    cout<<t%k;
}
