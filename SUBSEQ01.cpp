#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,u=0,v=0,t=0,d=0,cl=1;
    cin>>n>>k; long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    t=a[0];
    while( v<n)
    {
        if(t<=k)
        {
         //   d=d+(v-u+1);
           v++;t=t+a[v];
        }
        if(t>k)
        {
            d=d+v-u;
            t=t-a[u];u++;
        }
    }
    cout<<t<<' ';
    cout<<d;
}
