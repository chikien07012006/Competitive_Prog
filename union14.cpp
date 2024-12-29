#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,d=0,res=0;string a;
    cin>>n>>a;
    for(long long i=0;i<n;i++)
    {
        if(a[i]=='(') d++;
        if(a[i]==')')
        {
            if(d>0)
            {
                res++; d--;
            }
        }
    }
    cout<<res*2;
}
