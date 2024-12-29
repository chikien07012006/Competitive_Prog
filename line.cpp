#include<bits/stdc++.h>
using namespace std;
long long d[1000000];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,q,l,r;
    cin>>n; long long a[n];
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        long long res=0;
        cin>>l>>r;
        for(int j=l;j<=r;j++) d[a[j]]++;
        for(int j=l;j<=r;j++){res=max(res,d[a[j]]);}
        cout<<res<<endl;
        for(int j=l;j<=r;j++) d[a[j]]=0;
    }
    return 0;
}
