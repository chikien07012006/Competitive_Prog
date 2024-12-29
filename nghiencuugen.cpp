#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    string n,t;cin>>n;
    for(ll i=0;i<n.size();i++)
    {
        t=t+n[i];string t1;ll j=i+1;
        ll h=n.size()%(i+1);
        if(n[n.size()-h]==t[0])
        {while(j<=n.size())
        {
            t1=t1+t;
            j=j+(i+1);
        }
        for(ll k=t1.size();k<n.size();k++)t1=t1+n[k];
        if(t1==n){cout<<t;return 0;}}
    }
}
