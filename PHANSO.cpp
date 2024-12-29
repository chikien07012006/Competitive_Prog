#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long m,n,t,res=0;
    cin>>m>>n;if(m<n){t=m;m=n;n=t;}
    for(long long i=1;i<n;i++)
    {
        res=res+(2*m-1)/(n+i)-(m/(n+i));
    }
    cout<<res;
}
