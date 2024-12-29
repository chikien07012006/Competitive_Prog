#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,d=0,res=0; string a;
    cin>>n; cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='L')d++;
        if(a[i]=='N') res=res+d;
    }
    cout<<res;
}
