#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b;
    cin>>a>>b;
    ll h=a/2,k=b/2;
    ll d=h*k;
    if(a%2==1&&b%2==0)d=d+b/2;
    if(a%2==0&&b%2==1)d=d+a/2;
    if(a%2==1&&b%2==1)d=d+b/2+a/2+1;
cout<<d;
}

