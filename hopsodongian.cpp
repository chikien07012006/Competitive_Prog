#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
bool kt(long long n)
{
    if(n<2){return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
    for(int h=1;h<=t;h++)
    {
        ll n,fl=0; cin>>n;
        for(ll i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                ll b=n/i;
                cout<<i<<' '<<b;
                if(kt(b)==1&&kt(i)==1){cout<<"Yes"<<endl;fl=1;break;}
            }
        }
        if(fl==0)cout<<"No"<<endl;
    }
}
