#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
string a="Amonia",b="Hydro sulfide",c="Methamphetamine",d="Dinito monoxide",e="Silica";
signed main()
{
    ios_base::sync_with_stdio(0);
    ll q; cin>>q;
    For(i,1,q)
    {
        string x;
        getline(cin,x);
    For(i,0,x.size()-1)
        {
            ll k=0;
            if(x[i]=='A')
            {
                ll fl=0;
                For(j,i,i+a.size()-1)
                {
                    if(x[j]==a[k]);
                    else
                    {
                     fl=1; break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Yes"<<endl; continue;
                }
            }
            if(x[i]=='H')
            {
                ll fl=0;
                For(j,i,i+b.size()-1)
                {
                    if(x[j]==b[k]);
                    else
                    {
                     fl=1; break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Yes"<<endl; continue;
                }
            }
            if(x[i]=='M')
            {
                ll fl=0;
                For(j,i,i+c.size()-1)
                {
                    if(x[j]==c[k]);
                    else
                    {
                     fl=1; break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Yes"<<endl; continue;
                }
            }
            if(x[i]=='D')
            {
                ll fl=0;
                For(j,i,i+d.size()-1)
                {
                    if(x[j]==d[k]);
                    else
                    {
                     fl=1; break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Yes"<<endl; continue;
                }
            }
            if(x[i]=='S')
            {
                ll fl=0;
                For(j,i,i+e.size()-1)
                {
                    if(x[j]==e[k]);
                    else
                    {
                     fl=1; break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Yes"<<endl; continue;
                }
            }
        }
                    cout<<"No"<<endl;
    }

}




