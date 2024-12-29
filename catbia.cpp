#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long x,y,a,b,t;
    cin>>x>>y;
    a=x;b=y;
    while(a>0)
    {
        t=a;
        a=b%a;
        b=t;
    }
    cout<<b;
}
