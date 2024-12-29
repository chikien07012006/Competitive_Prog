#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {string s; cin>>s;ll res=0;
    FOR(i,0,9)
    {
        FOR(j,0,9)
        {
            ll fl=0,d=0;
            FOR(k,0,s.size()-1)
            {
             if(fl==0)
             {
                 if(s[k]-48==i)
                 {
                     fl=1;
                 }
             }
             if(fl==1)
             {
                 if(s[k]-48==j)
                 {
                     fl=0;if(i!=j)d=d+2;
                     else d++;
                 }
             }
            }
            res=max(res,d);
        }
    }
    cout<<s.size()-res<<endl;;
    }
}
