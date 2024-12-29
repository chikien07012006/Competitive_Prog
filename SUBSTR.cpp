#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[200];
deque<ll>f;
int main()
{
    freopen("SUBSTR.inp","r",stdin);
    freopen("SUBSTR.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll re=0,re1=0;
    string a; cin>>a;
    For(i,0,a.size()-1)
    {
        f.push_back(i);
        d[a[i]]++;
        if(d[a[i]]==1&&i==a.size()-1)
        {
            if(i-f.front()+1>re)
            {
                re=i-f.front()+1; re1=f.front();
            }
        }
        if(d[a[i]]==2)
        {
            if(i-f.front()>re)
            {
                re=i-f.front(); re1= f.front();
            }
            while(a[f.front()]!=a[i]){d[a[f.front()]]--;f.pop_front();}
            d[a[f.front()]]--;f.pop_front();
        }
    }
    cout<<re1+1<<' '<<re;
}




