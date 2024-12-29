#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m,t=0;
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=i;j<=n;j++)
        {
            t=t+j;
            if(t==m){cout<<i<<' '<<j; return 0;}
            if(t>m) break;
        }
        t=0;
    }
    cout<<-1;
}
