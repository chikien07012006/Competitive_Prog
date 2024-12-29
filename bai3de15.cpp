#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[60],d1[60];
int main()
{
    ios_base::sync_with_stdio(0);
    string x,y,t; cin>>x>>y;
    For(i,0,x.size()-1)
    {
        d[x[i]]++;
    }
    For(i,0,y.size()-1)
    {
        if(d[y[i]]!=0&&d1[y[i]]==0)
        {
            t=t+y[i];
            d1[y[i]]=1;
        }
    }
    sort(t.begin(),t.end());
    for(ll i=t.size()-1;i>=0;i--) cout<<t[i];
}
