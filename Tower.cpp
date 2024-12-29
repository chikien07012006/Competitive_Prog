#include<bits/stdc++.h>
using namespace std;
const long long k=(1e9+7);
long long lu(long long a, long long b,long long k)
{
    if(b==1){return a%k;}
    else
    {
        long long s=lu(a,b/2,k);
        if(b%2==0)
        {
            return (s*s)%k;
        }
        else
        {
            return (s*s*a)%k;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t;
    cin>>n;t=(lu(3,n,k-1))%(k-1);
    cout<<lu(3,t,k)%k;
}
