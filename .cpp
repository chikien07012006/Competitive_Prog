#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<string>p;
signed main()
{
    //freopen("WORDS.INP","r",stdin);
    //freopen("WORDS.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    string s,k;
    getline(cin,s);
    ll d=0;
    For(i,0,s.size()-1)
    {
        if(s[i]!=' ') k=k+s[i];
        if(s[i]==' '&&s[i-1]!=' '|| i==s.size()-1)
        {
            p.push_back(k);
            k="";
            d++;
        }
    }

    cout<<d<<endl;
    For(i,0,p.size()-1)
    {
        cout<<p[i]<<endl;
    }
}


