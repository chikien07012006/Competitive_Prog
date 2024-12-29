#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long n,t=0,m,d=0; cin>>n;
    while(cin>>m)
    {
        t=t+m;d++;
    }
    cout<<t-d+1;
}
