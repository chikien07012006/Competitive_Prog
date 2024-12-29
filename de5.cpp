#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,scc,j=0;
    long long a[100000];
    cin>>n>>m>>k;
    n<m;
    for(int i=n;i<=m;i++)
    {
        while(i!=0)
        {
            scc=i%10;
            cout<<scc;
            a[j]=scc;
            j++;
            i=i/10;
        }
    }

}
