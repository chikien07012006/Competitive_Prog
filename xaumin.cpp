#include<bits/stdc++.h>
using namespace std;
int main()
{
    long k;
    string n;
    cin>>k>>n;
    long long l=0,r=n.size()-k,mi=1000000000000000000000;
    for(int j=0;j<k;j++)
    {
        for(int i=l;i<=r;i++)
        {
            if((long)n[i]<mi)
            {
                mi=n[i];
                l=i+1;
            }
        }
        cout<<(char)mi;
        r++;
        mi=100000000000000000000000;
    }
}
