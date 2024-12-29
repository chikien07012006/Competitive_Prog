#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,d,e,s=0;
    cin>>n>>a>>b>>c>>d;
    for(int i=0;i<n;i++)
    {
        e=a;
        a=a+b;
        b=b+c;
        c=c+d;
        d=d+e;
    }
    s=a+b+c+d;
    cout<<s/2;
}
