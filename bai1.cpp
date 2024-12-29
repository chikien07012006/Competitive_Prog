#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d=1;
signed main()
{
    ios_base::sync_with_stdio(0);
    string s,t; cin>>s; t=s;
    for(ll i=s.size()-1;i>=0;i--)
    {
        if(i-d<0)
        {
            t[i+i-(d-i)]=s[i];
        }
        else t[i-d]=s[i];
        d++;
        cout<<t<<endl;
    }
    cout<<t;
}





