#include<bits/stdc++.h>
using namespace std;
long long hnp(long long n)
{
    long long res=0;;
    while(n>0)
    {
        res=res*10+n%2;
        n=n/2;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;
    cin>>n;
    cout<<hnp(n);
    return 0;
}
