#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long m,k;cin>>m>>k;long long a[m],s=0;
        for(long long i=1;i<=m;i++){cin>>a[i];s=s+a[i];}
        s=(s+k)/(m+1);if(s%(m+1)!=0){cout<<"NO";return 0;}

        for(long long i=1;i<=m;i++)
        {
            if(a[i]>=k){cout<<"NO";return 0;}
        }
        cout<<"YES";
    }
}
