#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,scc,d=0;
    cin>>n;
    m=n;
    while(n!=0)
    {
        scc=n%10;
        if(scc==0)
        {
            ;
        }
        else
        {
         if(m%scc==0)
        {
            d++;
        }
        n=n/10;
        }
    }
    cout<<d;
}

