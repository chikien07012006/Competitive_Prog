#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll t; cin>>t;
    while(t--)
    {
        ll u,o,m,c,d=0; cin>>c>>u>>o>>m;
        ll a[5]; a[1]=o; a[2]=m; a[3]=u;
        sort(a+1,a+3,greater<long long>());
        while(c%a[1]==0)
        {
            c=c/a[1];d++;
        }
        if(c==1){cout<<d<<endl;continue;}
        while(c%a[2]==0)
        {
            c=c/a[2];d++;
        }
        if(c==1){cout<<d<<endl;continue;}
        while(c%a[3]==0)
        {
            c=c/a[3];d++;
        }
        if(c==1){cout<<d<<endl;continue;}
        cout<<-1<<endl;
    }
}



