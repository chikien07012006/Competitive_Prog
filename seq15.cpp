#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m,k,l,r,mid,res,t,flag=0;
    cin>>n>>m>>k;long long y[m+1],x[n+1],s[k+1];
    for(long long i=1;i<=n;i++)cin>>x[i];
    for(long long i=1;i<=m;i++) cin>>y[i];
    sort(y+1,y+1+m);
    sort(x+1,x+1+n,greater<int>());
    for(long long i=1;i<=k;i++)
        {cin>>s[i];res=LONG_LONG_MAX;flag=0;
        for(long long j=1;j<=n;j++)
        {
            l=1;r=m;t=s[i]-x[j];
            if(t>y[m]||t<y[1]){if(t>y[m]){res=min(res,t-y[m]);break;} else res=min(res,abs(t-y[1]));}
            else{
            while(l<=r)
            {
                mid=(l+r)/2;
                if(y[mid]>t){r=mid-1;res=min(res,abs(x[j]+y[mid]-s[i]));}
                if(y[mid]<t){l=mid+1;res=min(res,abs(x[j]+y[mid]-s[i]));}
                if(y[mid]==t){res=0;flag=1;break;}
            }
            if(flag==1)break;}
        }
        cout<<res<<endl;
    }
    return 0;
}
