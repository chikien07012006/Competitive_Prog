#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,l;
    cin>>k;
    l=k;
    for(int i=1;i<=k;i++)
    {
        long long p=i;
        long long m=i*2;
        l=l-p;
        if(l<=0)
        {
            cout<<"Patlu"; return 0;
        }
        l=l-m;
        if(l<=0)
        {
            cout<<"Motu"; return 0;
        }
    }
}
