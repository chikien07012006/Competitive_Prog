#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("NUM.INP","r",stdin);
    freopen("NUM.OUT","w",stdout);

    long n,k;
    cin>>n>>k;
    for(int i=n+1;i<10000000000000000000000;i++)
    {
        if(i%k==0)
        {
            cout<<i;
            return 0;
        }
    }
}
