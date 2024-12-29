#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long m=1e9+7;
long long pow(long long a, long long b)
{
    if(b==1){return a;}
    else
    {
        long long s=pow(a,b/2);
        if(b%2==0)
        {
            return (s%m)*(s%m)%1000000007;
        }
        else
        {
            return (s%m)*(s%m)*(a%m)%1000000007;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long a,b; long long s;
    cin>>a>>b;
    cout<<pow(a%1000000007,b);
}

