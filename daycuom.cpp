#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[125];
int main()
{
    ios_base::sync_with_stdio(0);
    ll a; cin>>a;
    string n; cin>>n;
    For(i,0,n.size()-1)
    {
        d[n[i]]++;
    }
    if(d['c']>=d['u'])
    {
        n=n+'u'; ll re=0;
        d['c']=0;d['u']=0;
        For(i,0,n.size()-1)
        {
            d[n[i]]++;
            if(n[i]=='u')
            {
                re=re+d['c'];
            }
        }
        cout<<re; return 0;
    }
    if(d['c']<d['u'])
    {
        n='c'+n; ll re=0;
        d['c']=0;d['u']=0;
        For(i,0,n.size()-1)
        {
            d[n[i]]++;
            if(n[i]=='u')
            {
                re=re+d['c'];
            }
        }
        cout<<re; return 0;
    }
}




