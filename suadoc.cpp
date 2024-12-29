#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    for(ll i=1;i<=t;i++)
    {
    ll n,k;cin>>n>>k;
    if(n%2==1)
    {
        if((n-1)*4>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        if((n-1)*2+(n-1)*2-1>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
}
