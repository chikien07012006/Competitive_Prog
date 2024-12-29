#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool check(double n)
{
    ll t=int(n);
    if(t==n) return 1;
    return 0;
}
ll d=1;
int main()
{
    ios_base::sync_with_stdio(0);
     double n; cin>>n;
    while(1)
    {
        double h=n*d;
        if(check(h)==1) {cout<<d;return 0;}
        d++;
    }
}
