#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m,l,r,mid,t=LONG_LONG_MAX,res=LONG_LONG_MAX;
    cin>>m>>n;long long a[m],b[n];
    for(long long i=1;i<=m;i++) cin>>a[i];
    for(long long i=1;i<=n;i++) cin>>b[i];
    sort(b+1,b+1+n);
    for(long long i=1;i<=m;i++)
    {
        l=1;r=n;
        while(l<=r)
        {

            mid=(l+r)/2;
            t=min(abs(a[i]+b[mid]),t);
            if(b[mid]+a[i]>0) r=mid-1;
            if(b[mid]+a[i]<0) l=mid+1;
            if(b[mid]+a[i]==0) {cout<<0;return 0;}
        }
        res=min(res,t);t=LONG_LONG_MAX;
    }
    cout<<res;
}
