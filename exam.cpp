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
        ll n; cin>>n;
        if(n<38){cout<<n<<endl;continue;}
        if(n%5>=3)
        {
            cout<<n+(5-n%5)<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
}
