#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    string n,t,k;cin>>n>>t;ll re=0;
    for(ll i=0;i<min(n.size(),t.size());i++)
    {k=k+n[i];
        if(n.size()%(i+1)==0&&t.size()%(i+1)==0)
        {
            ll h=n.size()/(i+1);string y,u;
            for(ll b=1;b<=h;b++)y=y+k;
            if(y!=n)continue;
                else{
                    ll j=t.size()/(i+1);
                    for(ll b=1;b<=j;b++)u=u+k;
                    if(u==t)re++;
                    else continue;
                }
        }
    }
    cout<<re;
}
