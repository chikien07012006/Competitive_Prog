#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long k,d=0;string a,b;
    cin>>k>>a>>b;
    for(int i=0;i<k;i++)
    {
        if(a[i]!=b[i])d++;
    }
    cout<<pow(2,d);
}

