#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,a,b,t,d=0;
    cin>>n>>a>>b;
    if(a>b){t=a;a=b;b=t;}
    if(n%b==0) {cout<<n/b;return 0;}
    while(n>0)
    {
        n=n-a;d++;
        if(n%b==0){cout<<n/b+d;return 0;}
    }
    cout<<-1;
}
