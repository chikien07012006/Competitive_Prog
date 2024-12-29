#include<iostream>
using namespace std;
typedef long long ll;
ll a[100]={6,2,5,5,4,5,6,3,7,6};
ll kt(ll n)
{
    if(n==0)return 1;
    if(n==1)return 5;
    if(n==2)return 1;
    if(n==3)return 2;
    if(n==4)return 2;
    if(n==5)return 3;
    if(n==6)return 1;
    if(n==7)return 2;
    if(n==8||n==9)return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    if(n==1)
    {
        string n;cin>>n;ll re=0;
        for(ll i=0;i<n.size();i++)re=re+a[n[i]-48];
        cout<<re;
    }
    else
    {
        string n;cin>>n;ll re=0,d=0;
        d=d+kt(n[n.size()-1]-48);
        for(ll i=n.size()-2;i>=0;i--)
        {
            if(kt(n[i]-48)!=0){d=d+kt(n[i]-48)*d;d=d+kt(n[i]-48);}
        }
        cout<<d;
    }
}
