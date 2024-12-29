#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[100005];
bool ktsnt(long long n)
{
    if(n<2){return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll q;cin>>q; while(q--){
        ll a; cin>>a;
        ll b=a-1;
        if(ktsnt(a*a+a*b+b*b)==true) cout<<1<<endl;
        else cout<<0<<endl;
    }
}

