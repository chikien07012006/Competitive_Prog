#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll x1[n+5],y1[n+5],x2[n+5],y2[n+5];
    For(i,1,n)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
            if(y1[i]>y2[i])
            {
                swap(y1[i],y2[i]);
            }

            if(x1[i]>x2[i])
            {
                swap(x1[i],x2[i]);
            }
    }
    For(i,1,n)
    {
        For(j,i+1,n)
        {
            if((x1[i]==x2[i]&&x1[j]==x2[j])||(y1[i]==y2[i]&&y1[j]==y2[j]))continue;
                if(x1[i]>=x1[j]&&x1[i]<=x2[j]&&y1[j]>=y1[i]&&y1[j]<=y2[i]){re++;continue;}
                if(y1[i]>=y1[j]&&y1[i]<=y2[j]&&x1[j]>=x1[i]&&x1[j]<=x2[i]){re++;continue;}
        }
    }
    cout<<re;
}
