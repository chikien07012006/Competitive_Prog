#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        ll d[100005]; memset(d,0,sizeof d);
        ll fl=0;
        string n; cin>>n;
        if(n.size()%2==1)
        {
            cout<<"NO"<<endl; continue;
        }
        For(i,0,n.size()/2-1)
        {
            d[n[i]]++;
        }
        For(i,n.size()/2,n.size()-1)
        {
            if(d[n[i]]==0)
            {
                fl=1; cout<<"NO"<<endl; break;
            }
            d[n[i]]++;
        }
        if(fl==0)
        {
            For(i,0,n.size()/2-1)
            {
                if(d[n[i]]==1)
                {
                    fl=1; cout<<"NO"<<endl; break;
                }
            }
            if(fl==0)
            {
                cout<<"YES"<<endl;
            }
        }
    }
}











