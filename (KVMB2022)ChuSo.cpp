#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll check[10];
bool check1(ll a)
{

    memset(check,0,sizeof(check));
    while(a>0){
    check[a%10]++;
    if(check[a%10]==2)return false;
    a=a/10;
    }
    return true;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    ll T; cin>>T;
    while(T--)
    {
        ll x; cin>>x;x++;
        while(check1(x)==false)x++;
        cout<<x<<endl;
    }
}
