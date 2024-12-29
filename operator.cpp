#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long a,b,t=0;
        cin>>a>>b;
        for(long long i=a;i>=1;i--)
        {
            if(t<b)t=t+i;
            else t=t-i;
        }
        if(t==b) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
