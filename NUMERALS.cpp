#include<iostream>
using namespace std;
long long k=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t;
    cin>>n;long long a[n],b[n];t=n;long long d=1;
    for(long long i=1;i<=n;i++)cin>>a[i];
    for(long long i=1;i<n;i++)
    {
        for(long long j=1;j<=t-1;j++)
        {
            if(i%2==1)
            {
             b[d]=(a[j]+a[j+1])%k;
            }
            else
            {
                b[d]=(a[j]*a[j+1])%k;
            }
            d++;
        }
        d=1;
        for(long long i=1;i<=t;i++)
        {
          //  cout<<b[i]<<' ';
            a[i]=b[i];
        }
      //  cout<<endl;
        t--;
    }
    cout<<b[1];
}
