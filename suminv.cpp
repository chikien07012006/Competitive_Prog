#include<bits/stdc++.h>
using namespace std;
const long long k=(1e9+7);
int main()
{
    ios_base::sync_with_stdio(0);
     long long n,res=0,t=1;
     cin>>n;
     for(long long i=1;i<=n;i++)
     {
         t=(t*i)%k;//t=t%k;
     }
     //cout<<t<<endl;
     res=t;
     for(long long i=2;i<=n;i++)
     {
         res=(res+(t/i))%k;
     }
     cout<<res%k;
}
