#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b,c;cin>>a>>b>>c;if(a+b>c&&b+c>a&&a+c>b&&a!=b&&b!=c&&c!=a){cout<<"YES";return 0;}cout<<"NO";
}
