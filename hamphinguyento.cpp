#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool ktsnt(ll n)
{
    if(n==2||n==3) return 1;
    if(n%2==0||n%3==0||n<2) return 0;
    for(ll i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%(i+2)==0) return 0;
    }
    return 1;
}
int phi(int n) {
    int res = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if(ktsnt(phi(n))==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}




