#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,x;
    cin>>n>>x;if(x==0||(n==0&&x==1)){cout<<0;return 0;}
     ll s=pow(10,x);
     ll h=pow(10,x);
    while(1)
    {
     if(s>=n){
        cout<<s-n;return 0;
     }
     s=s+h;
    }
}
