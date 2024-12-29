#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
ll re=0;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    string n1,n2; cin>>n1>>n2;
    ll n,q; cin>>n>>q; n=n%(n1.size()+n2.size());
    string t;
    if(n%2==0)  t=n2+n1;
    else  t=n1+n2;
    while(q--)
    {
        ll x; cin>>x; x=x%(n1.size()+n2.size());
        cout<<t[x]<<endl;
    }
}

