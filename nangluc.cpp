#include<iostream>
#include<algorithm>
using namespace std;
long long a[100001],c[100001];
struct abc{long long nl,dth;};
abc b[100001];
bool ss(abc truoc, abc sau)
{
    return truoc.nl<sau.nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,l,r,mid,res=LONG_LONG_MIN;
    cin>>n>>k;
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<=k;i++) {cin>>b[i].nl>>b[i].dth;}
    sort(b+1,b+1+k,ss);
    for(long long i=1;i<=k;i++)c[i]=c[i-1]+b[i].dth;
    for(long long i=1;i<=n;i++)
    {
        if(a[i]<b[1].nl) cout<<0<<' ';
        else
        {
            l=1;r=k;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(b[mid].nl>a[i])r=mid-1;
                if(b[mid].nl<=a[i]){l=mid+1;res=max(res,mid);}
            }
            cout<<c[res]<<' ';res=LONG_LONG_MIN;
        }
    }
}
