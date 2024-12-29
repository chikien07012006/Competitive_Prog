#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<string>p;
signed main()
{
    ll n; cin>>n;
    while(n!=1)
    {
        cout<<n<<' ';
        if(n%2==0)n=n/2;
        else n=n*3+1;
    }
    cout<<1;
}



