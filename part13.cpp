#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long d[13]={0,30,29,31,30,31,30,31,31,30,31,30,31};
    long long a,b,c;cin>>a>>b>>c;
    if(b==1){cout<<a-24;return 0;}long long res=7;
    for(long long i=2;i<=b-1;i++) res=res+d[i];
    cout<<res+a;
}
