#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r,k,d=0;
    cin>>l>>r>>k;
    for(int i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            d++;
        }
    }
    cout<<d;
}
