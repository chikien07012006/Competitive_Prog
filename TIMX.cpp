#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>c;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll T; cin>>T;
    while(T--)
    {
        string n; cin>>n;
        if(n=="0") cout<<0<<endl;
        else
        cout<<n.size()<<endl;
    }
}


