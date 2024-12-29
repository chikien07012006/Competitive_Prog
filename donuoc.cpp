#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long a,b,c,d=3,t;
    cin>>a>>b>>c;
    while(d<=c)
    {
        t=b;
        b=b*2-a;
        a=t;
        d++;
    }
    cout<<b;
}
