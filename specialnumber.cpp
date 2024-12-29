#include<bits/stdc++.h>
using namespace std;
bool kt(long long a)
{
    long long n=a%10*10+a/10;
    if((n+a%10+a/10)==a) return true;
    return false;
}
int main()
{
    for(long long i=11;i<=99;i++)
    {
        if(kt(i)==true) {cout<<i<<endl;}
    }
}
