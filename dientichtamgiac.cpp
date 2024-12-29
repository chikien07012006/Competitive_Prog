#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,s;cin>>a>>s;
    for(ll i=s*2/a;i<=s*2;i++)
    {
        if(a*i/2>=s){cout<<i;return 0;}
    }
}
