#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
struct ok{long long x,y;};
bool ss(ok trc,ok sau)
{
    return trc.x<sau.x;
}
int main()
{
 //   freopen("FLOWERS1044.inp","r",stdin);
 //   freopen("FLOWERS1044.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,m,s,re=0,u=0,v=0; vo n>>m>>s; ok a[n+5],b[m+5];
    For(i,1,n) vo a[i].x,a[i].y=i;
    For(i,1,m) vo b[i].x,b[i].y=i;
    sort(b+1,b+1+m,ss);

    For(i,1,n)
    {
        ll t=s-a[i].x;
        ll l=1,r=m,mid,re1=0,k=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(b[mid].x==t){ra a[i].y<<' '<<b[mid].y;return 0;}
            if(b[mid].x<t)
                {
                    if(b[mid].x>re1)
                    {
                        re1=b[mid].x;
                        k=b[mid].y;
                    }
                    l=mid+1;
                }
            if(b[mid].x>t){r=mid-1;}
        }
        if(re1!=0)
        {
            if(re1+a[i].x>re)
            {
                cout<<a[i];
                re=re1+a[i].x; u=a[i].y; v=k;
            }
        }
    }
    if(re==0) ra 0;
    else ra u<<' '<<v;
    return 0;
}



