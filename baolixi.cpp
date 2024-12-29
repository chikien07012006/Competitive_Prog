#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,k,res=0;
    cin>>n>>k;long long a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-2;i++)
    {
        if(a[i]+a[i+1]+a[i+2]>=k)
        {
            res++;
        }
    }
    cout<<res;
}
