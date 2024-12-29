#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,k,d=1;
    cin>>n>>x>>k;
    if((x+k)<n)
    {
        cout<<x+k;
        return 0;
    }
    else
    {
        if((x+k)%n==0)
        {
            cout<<n;
            return 0;
        }
        cout<<(x+k)%n;
    }
}
