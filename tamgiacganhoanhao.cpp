#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,res=0;cin>>n;if(n==2){cout<<0;return 0;}

    for(ll i=2;i<n;i++)
    {
        if(i*2+i+1<=n)res=max(res,i*2+i+1);
    }
    cout<<res;
}
