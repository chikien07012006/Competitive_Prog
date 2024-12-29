#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,q,l,r;
    cin>>n>>q;long long a[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<=q;i++)
    {
        cin>>l>>r;long long res=LONG_LONG_MAX;
        for(long long j=l;j<=r;j++)res=min(res,a[j]);
        cout<<res<<endl;
    }
}
