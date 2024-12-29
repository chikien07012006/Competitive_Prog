#include<bits/stdc++.h>
using namespace std;
long long d[239],o=1,vt=0;
int main()
{
    string a;
    cin>>a;
    for(long long i=0;i<a.size();i++)
    {
        d[a[i]]++;// cout<<d[a[i]]<<' ';
        if(d[a[i]]==2)
        {
            o++;
            for(long long j=0;j<=i;j++)
            {
                d[a[j]]=0;
            }
            d[a[i]]=1;
        }
    }
    cout<<o;
}
