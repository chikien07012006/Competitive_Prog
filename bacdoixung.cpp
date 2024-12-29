#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
ll re=0;
bool check(string n)
{
    ll i=0,j=n.size()-1;
    while(i<=j)
    {
        if(n[i]!=n[j]) return 0;
        i++;j--;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    freopen("PALINDEG.INP","r",stdin);
    freopen("PALINDEG.OUT","w",stdout);
    string n; cin>>n;
    while(n.size()>1)
    {
        if(check(n)==1)
        {
         re++;
         n=n.substr(n.size()/2,n.size());
        }
        else break;
    }
    cout<<re;
}
