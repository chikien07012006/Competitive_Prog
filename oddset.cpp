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
        ll n,d=0,d1=0; cin>>n; ll a[2*n+5];
        For(i,1,2*n)
        {
            cin>>a[i];
            if(a[i]%2==0)d++;
            else d1++;
        }
        if(d==d1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}


