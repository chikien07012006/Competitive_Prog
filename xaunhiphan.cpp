#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    string s="01",t1="1",t2="0";
    while(s.size()<n+2)
    {
        s=s+t1+t2;
        string t=t1;
        t1=t1+t2;
        t2=t2+t;
    }
    cout<<s[n-1]<<s[n]<<s[n+1];
}
