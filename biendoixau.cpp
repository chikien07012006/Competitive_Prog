#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll re=1e18;
ll diff(string a, string b)
{
    ll re=0;
    For(i,0,a.size()-1)
    {
        if(a[i]!=b[i]) re++;
    }
    return re;
}
int main()
{
    //freopen("CHANGE.INP","r",stdin);
    //freopen("CHANGE.OUT","w",stdout);
    ios_base::sync_with_stdio(0);   cin.tie(NULL);  cout.tie(NULL);
    string s,t; cin>>s>>t;
    ll n=s.size()-1;
    s=s+s;
    For(i,0,n)
    {
        string news;
        For(j,i,i+n)
        {
            news+=s[j];
        }
     //   cout<<i<<' '<<news<<endl;
        re=min(re,diff(news,t)+min(i,n-i+1));
    }
    cout<<re;
}

