#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,x=1,y,b;
    cin>>n;y=n;
    for(long long a=2;a<=sqrt(n);a++)
    {
        b=n/a;
        if(a*b<n)b++;
        if(a+b<x+y){x=a;y=b;}
    }
    cout<<x<<' '<<y;
}
