#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,scc,t=0,j,boi=0;
    cin>>a>>b;
    for(long long i=1;i<1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;i++)
    {
        boi = i*a;
        j=boi;

        while(boi!=0)
        {
            scc=boi%10;
            boi=boi/10;
            t=t+scc;
        }
        if(t==b)
        {
            cout<<j;
            return 0;
        }
        t=0;
    }
    cout<<-1;
}
