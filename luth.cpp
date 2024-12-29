#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long h=1e9+7;
long long pow(long long a, long long b, long long c)
{
    if(b==1){return a;}
    else
    {
        long long s=pow(a,b/2,c);
        if(b%2==0)
        {
            return (s*s)%c;
        }
        else
        {
            return (s*s*a)%c;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long b; cin>>b;
    cout<<pow(3,b-1,h);
}
