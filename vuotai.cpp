#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k;cin>>n>>k;long long a[n+5],re=1e18,t=0;
    for(int i=1;i<=n;i++){cin>>a[i];t=t+a[i];}
    for(int i=1;i<=n;i++)
    {
        int h=a[i]-k;
        long long o=max(0,h);
     re=min(re,t-a[i]+o);
    }
    cout<<re+1;
}
