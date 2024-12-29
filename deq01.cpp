#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;
    cin>>n;long long a[n],b[n];
    for(long long i=1;i<=n;i++)cin>>a[i];
    b[1]=a[1];
    cout<<0<<' ';
    for(long long i=2;i<=n;i++)
    {
        if(b[i-1]>a[i]){cout<<0<<' ';}
        else{for(long long j=i-1;j>=1;j--)if(a[j]<=a[i]){cout<<a[j]<<' ';break;}}
        b[i]=min(b[i-1],a[i]);
        //cout<<b[i]<<endl;
    }
}
