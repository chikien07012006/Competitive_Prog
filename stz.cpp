#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,scc,d=0,h;
    cin>>n;
    for(long long i=1;i<10000000000000000000000000;i++)
    {
        m=i*n;
        h=m;
        while(m!=0)
        {
            scc=m%10;
            m=m/10;
            if(scc!=7&&scc!=2&&scc!=0)
            {
                 m=0;
                 continue;
            }
            else
            {
            if(m==0)
            {
            cout<<h;
            return 0;
            }
            }
        }

    }

}
