#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,t=0,tam;
    cin>>n>>k;long long a[n];
    for(long long i=1;i<=n;i++){cin>>a[i];t=t+a[i];}
    if(t<k){cout<<-1;return 0;}
    if(t==k){cout<<0;return 0;}
    tam=t-k;
    sort(a+1,a+1+n,greater<long long>());
    for(long long i=1;i<=n;i++)
    {
        if(tam<=a[i]-1){cout<<i;return 0;}
        tam=tam-a[i]+1;
    }
    cout<<n;
}
