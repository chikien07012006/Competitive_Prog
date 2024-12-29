#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,scc,d=0;
    cin>>n;
    while (n>1  )
    {
        scc=n%10;
        if(scc==0)
        {
            continue;
        }
        if(n%scc==0)
        {
            d++;
        }
        n=n/10;
    }
    cout<<d;
}
