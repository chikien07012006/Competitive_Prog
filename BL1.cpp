#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,d=0,re=0; cin>>n;
    For(i,1,sqrt(n)){
        if(n%i==0)
        {
            d=d+2;
            re=re+i;re=re+n/i;
        }
    }
    cout<<d<<endl<<re;
}
