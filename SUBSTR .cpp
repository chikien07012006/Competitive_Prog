#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[200];
int main()
{
    freopen("SUBSTR.inp","r",stdin);
    freopen("SUBSTR.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll re=0,re1=0;
    string a; cin>>a;
    For(i,0,a.size()-1)
    {
        For(j,i,a.size()-1)
        {
            d[a[j]]++;
            if(d[a[j]]==2)
            {
                if(j-i>re)
                {
                    re=j-i; re1=i;
                }
                break;
            }
        }
        For(j,0,200)d[j]=0;
    }
    cout<<re1+1<<' '<<re;
}



