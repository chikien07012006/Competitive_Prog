#include<bits/stdc++.h>
using namespace std;
long long a[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,u=1,v=1,t=0,d=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    t=a[1];
    while( v<=n)
    {
        if(t<=k)
        {
            d=d+v-u+1; v++;
            t=t+a[v];

        }
        else
        {
            t=t-a[u];u++;
        }
    }
    cout<<d;
}
