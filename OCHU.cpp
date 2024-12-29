#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
int main()
{
   // freopen("OCHU.inp","r",stdin);
   // freopen("OCHU.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,m; vo n>>m; string a[n+5],b[n+5];
    For(i,1,n) vo a[i];
    For(i,1,n) vo b[i];
    For(i,1,n)
    {
        string t;
        For(j,0,a[i].size()-1)
        {
            if(a[i][j]!='0')t=t+a[i][j];
        }
        For(j,1,n)
        {
            if(b[j].size()==t.size())
            {
                For(k,0,t.size()-1)
                {
                    if(t[k]!='1')
                    {
                        if(b[j][k]==t[k])
                        {
                            ll u=0;
                            For(l,0,m-1)
                            {
                                if(a[i][l]=='0')cout<<'0';
                                else {cout<<b[j][u];u++;}
                            }
                            cout<<endl;
                        }
                        break;
                    }
                }
            }
        }
    }
}


