#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    freopen("STEP.INP","r",stdin);
    freopen("STEP.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll re=0;
    string t;
    while(n--)
    {
        cin>>t;
        ll fl=0;
        For(i,0,t.size()-2)
        {
            if(t[i]>t[i+1])
            {
                fl=1;break;
            }
        }
        if(fl==0)re++;
    }
    cout<<re;
}


