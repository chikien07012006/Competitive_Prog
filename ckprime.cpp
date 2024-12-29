#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b;cin>>a>>b;
    if(a-b==1)
    {ll h=a+b;
        for(ll i=2;i<=sqrt(h);i++)
        {
            if(h%i==0){cout<<"NO";return 0;}
        }
        cout<<"YES";
    }
    else
    cout<<"NO";
}
