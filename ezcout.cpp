#include<bits/stdc++.h>
using namespace std;
long long hnp1(long long x)
{
    long long d=0;
    while(x>0)
    {
     if(x%2==1) d++;
     x=x/2;
    }
    return d;
}
int main()
{
    long long n;
    cin>>n;
    cout<<hnp1(n);
}
