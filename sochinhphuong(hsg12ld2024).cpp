#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>xuli;
ll dem[100005];
ll a,b,c,d;
ll tam=0;
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n; cin>>n;
    For(i,1,sqrt(n))
    {
        xuli.push_back(i*i);
        dem[i*i]=1;
    }
    For(i,0,xuli.size()-1)
    {
        For(j,0,xuli.size()-1)
        {
            For(k,0,xuli.size()-1)
            {
                ll T=n-xuli[i]-xuli[j]-xuli[k];
                if(T<0) break;
                if(dem[T]==1)
                {
                    if(sqrt(xuli[i])+sqrt(xuli[j])+sqrt(xuli[k])+sqrt(T)>=tam)
                    {
                        tam=sqrt(xuli[i])+sqrt(xuli[j])+sqrt(xuli[k])+sqrt(T);
                        a=sqrt(T);
                        b=sqrt(xuli[i]);
                        c=sqrt(xuli[j]);
                        d=sqrt(xuli[k]);
                    }
                }
            }
        }
    }
    if(tam==0) {cout<<-1; return 0;}
    vector<ll>h;
    h.push_back(a);
    h.push_back(b);
    h.push_back(c);
    h.push_back(d);
    sort(h.begin(),h.end());
    For(i,0,3) cout<<h[i]<<' ';
}




