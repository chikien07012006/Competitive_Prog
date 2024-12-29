#include <bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    ll k; cin>>k;
   // if(n.size()==k) {cout<<k*2;return 0;}
    For(i,0,n.size()-1)
    {
        string t;
        For(j,i,i+(n.size()-i+k)/2-1)
        {
            t=t+n[j];
        }
        if(i+t.size()==n.size()-1&&k>=t.size())
        {
            cout<<t.size()*2;return 0;
        }
        ll o=0,fl=0;
        For(j,i+t.size(),n.size()-1)
        {
            if(n[j]==t[o]) o++;
            else {fl=1;break;}
        }
        if(fl==0&&((n.size()-1)-(i+t.size())+1)+k>=t.size())
        {
            cout<<t.size()*2;return 0;
        }
    }
}
