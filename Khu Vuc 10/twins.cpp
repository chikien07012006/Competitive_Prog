#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++);
signed main()
{
    ios_base::sync_with_stdio(0);
    long long T; cin>>T;
    while(T--)
    {
        string a,b; cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b) cout<<"twins"<<endl;
        else cout<<"not twins"<<endl;
    }
}