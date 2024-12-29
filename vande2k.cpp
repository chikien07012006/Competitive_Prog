#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0,t;cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>t;if(t%2==0){
            ll k=2;
            while(t%k==0)
            {
                k=k*2;
            }
            re=max(re,k/2);
        }
    }
    cout<<re;
}


