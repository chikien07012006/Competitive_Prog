#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
string a[15]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
string b[15]={"0","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string n; cin>>n;
    if(n.size()==1)
    {
        cout<<a[n[0]-48];return 0;
    }
    if(n=="11") {cout<<"eleven";return 0;}
    if(n=="12") {cout<<"twelve";return 0;}
    if(n=="15") {cout<<"fifteen";return 0;}
    if(n=="18") {cout<<"eighteen";return 0;}
    if(n[0]=='1')
    {
        cout<<a[n[1]-48]<<"teen";return 0;
    }
    if(n[1]=='0')
    {
        cout<<b[n[0]-48];return 0;
    }
    cout<<b[n[0]-48]<<'-'<<a[n[1]-48];
}
