#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll q; cin>>q;
    while(q--)
    {
        ll l,r; cin>>l>>r;
        cout<<r/9-(l-1)/9<<endl;
    }
}




