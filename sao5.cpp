/*ssh=(sc-sd)/kc+1;
(ssh-1)*kc+sd;*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    /*ll t=(n-1)*2+1;
    ll h=0;
    For(i,1,n)
    {
        For(j,1,h) cout<<" ";
        For(j,1,t) cout<<"*";
        cout<<endl;
        h=h+2;t=t-2;
    }*/
    ll re=1;
    For(i,1,n) re=re*i; cout<<re;
}
