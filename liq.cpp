#include <iostream>
using namespace std;
long long a[10000],f[10000];
int main()
{
    long long n;cin>>n;
    int i,j;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        f[i]=1;
    }
    for (i=1; i<=n; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            if (a[i]<a[j]) f[j]=max(f[i]+1,f[j]);
        }
    }
    long long res=0;
    for (i=1; i<=n; i++) res=max(res,f[i]);
    cout<<res;
    return 0;
}
