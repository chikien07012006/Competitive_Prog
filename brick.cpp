#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,p1,p2;
bool ktsnt(ll n)
{
    if(n<2)return 0;
    if(n==2||n==3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(ll i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%(i+2)==0) return 0;
    }
    return 1;
}
signed main()
{
    ll T; cin>>T;
    while(T--){
        cin>>n;
        For(i,2,n)
        {
            ll h1=p1,h2=p2;
            if(ktsnt(i)==1)
            {
                p1=p2;
                p2=i;
            }
            if(p1*p2>n)
            {
                cout<<p1<<' '<<p2<<endl<<h1<<' '<<h2<<endl;
                cout<<n-h1*h2;
                return 0;
            }
        }
    }
}



