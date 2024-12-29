#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b,c,a1,b1,c1;
    cin>>a>>b>>c>>a1>>b1>>c1;
    ll y=(a1*c-a*c)/(a1*b+a*b);
    cout<<"y: "<<' '<<y<<endl;
    cout<<"x: "<<' '<<(c-b*y)/a;
}

