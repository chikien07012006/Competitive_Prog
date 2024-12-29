#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,t=0; //cin>>a;
    string n;
    while(cin>>n){
            t=0;
    For(i,0,n.size()-1)
    {
        t=t+(n[i]-48)*pow(2,n.size()-1-i);
    }
    cout<<t<<endl;}
}
