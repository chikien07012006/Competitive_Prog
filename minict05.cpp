#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    string s; cin>>s;
    ll res=0;
    FOR(i,0,s.size()-1)
    {
        ll d=0,d1=0;
        FOR(j,i,s.size()-1)
        {
            if(s[j]=='0')d++;
            else d1++;
            if(d==d1)res=max(res,d+d1);
        }
    }
    cout<<res;
}
