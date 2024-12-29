#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string n,t;cin>>n;
    for(long long i=0;i<n.size();i++)
    {t=t+n[i];string t1;
        if(n.size()%(i+1)==0)
        {
            for(long long j=1;j<=n.size()/(i+1);j++)t1=t1+t;
            if(t1==n)
            {
                cout<<n.size()/(i+1)<<t;return 0;
            }
        }
    }
}
