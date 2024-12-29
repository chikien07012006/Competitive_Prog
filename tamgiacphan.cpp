#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll d=n;
For(i,1,n)
{
    re=re+i*d;
    d--;
}
cout<<re;
}




