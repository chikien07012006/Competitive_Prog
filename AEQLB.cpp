#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
    ll a,b; cin>>a>>b;
    if(b>a){cout<<"NO"<<endl;continue;}
    if(a%2==0&&b%2==0){cout<<"YES"<<endl;continue;}
    if(a%2==1&&b%2==1){cout<<"YES"<<endl;continue;}
    if(a%2==1&&a*2<=b){cout<<"YES"<<endl;continue;}
    cout<<"NO"<<endl;
}
}
