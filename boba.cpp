#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll a1,b1,a2,b2,a3,b3,re=0; cin>>a1>>b1>>a2>>b2>>a3>>b3;
    For(i,a1,b1)
    {
        ll tama3=i*a2;
        ll tamb3=i*b2;
        ll x,y;
        if(tamb3<a3) continue;
        if(tama3>b3) break;
        if(tama3<=b3&&tama3>=a3)
        {
            x=tama3,y=min(tamb3,b3);
        }
        if(tama3<=a3)
        {
            x=a3; y=min(tamb3,b3);
        }
        if(x%i==0)
        {
            re=re+y/i-x/i+1;
        }
        else
        {
            re=re+y/i-x/i;
        }
    }
    cout<<re;
}
