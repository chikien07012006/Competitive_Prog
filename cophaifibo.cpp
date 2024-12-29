#include<iostream>
using namespace std;
typedef long long ll;
ll a[100000000],d=2;
void ab()
{   a[0]=0;a[1]=1;
    while(a[d-1]+a[d-2]<=10000000000)
    {
        a[d]=a[d-1]+a[d-2];
        d++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ab();
    ll t,n;cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll fl=0;
        cin>>n;
        for(ll i=1;i<=d;i++)if(a[i]==n){fl=1;cout<<"IsFibo"<<endl;break;}
        if(fl==0)cout<<"IsNotFibo"<<endl;
    }
}
