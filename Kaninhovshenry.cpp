#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll T; cin>>T;
    while(T--)
    {
        ll a,b; cin>>a>>b;
        if(a-b<=1&&!(a%2)) cout<<"Kaninho"<<endl;
        else  cout<<"Henry"<<endl;
    }
}
