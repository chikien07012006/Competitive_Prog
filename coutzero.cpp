#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d=0;
    cin>>n;
    while(n>0)
    {
     n=n/5;
     d+=n;
    }
    cout<<d;
}
