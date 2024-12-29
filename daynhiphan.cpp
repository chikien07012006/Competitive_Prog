#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--){
    string t; cin>>t;
    ll d0=0,d1=0;
    For(i,0,t.size()-1)
    {
        if(t[i]=='0')d0++;
        else d1++;
    }
    if(d0==0||d1==0)
    {
        cout<<t<<endl; continue;
    }
    For(i,0,t.size()-2)
    {
        if(t[i]==t[i+1])
        {
            cout<<t[i];
            if(t[i]=='0') cout<<'1';
            else cout<<'0';
        }
        else cout<<t[i];
    }
    cout<<t[t.size()-1]<<endl;
    }
}

