#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;
    cin>>n;ll a[n+5];for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n);
   // for(ll i=1;i<=n;i++)cout<<a[i]<<' ';
    //return 0;
    ll q,t;cin>>q;
    for(ll i=1;i<=q;i++)
    {
        cin>>t;
        ll l=1,r=n,mid;
       // if(t<=a[n]&&t>a[1])
        ll vt=0,fl=0;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(a[mid]==t){fl=1;r=mid-1;vt=mid;}
                if(a[mid]<t){vt=max(vt,mid);l=mid+1;}
                if(a[mid]>t){r=mid-1;}
            }
            if(fl==0)cout<<vt<<endl;
            if(fl==1)cout<<vt-1<<endl;

    }
}
