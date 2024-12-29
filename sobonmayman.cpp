#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
unordered_map<ll,ll>d;
void sang()
{
    For(i,1,100000)
    {
        for(ll j=i;j<=100000;j=j+i)d[j]++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll q; cin>>q;
    while(q--)
    {
        ll l,r,re=0; cin>>l>>r;
        For(i,l,r)
        {
            if(d[i]==4)re++;
        }
        cout<<re<<endl;
    }

}







