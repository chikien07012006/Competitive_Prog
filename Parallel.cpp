#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin>>n;
    while(n--)
    {
        ll x,y; cin>>x>>y;
        if((x<=1&&y<=2)||(x<=2&&y<=1))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
