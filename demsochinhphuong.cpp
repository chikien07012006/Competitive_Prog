#include<iostream>
using namespace std;
typedef long long ll;
ll d=0;
int main()
{
    ios_base::sync_with_stdio(0);
    ll l,r;cin>>l>>r;
    ll i=1,h=3;
    while(i<=r)
    {
        if(i>=l)d++;
            i=i+h;
            h=h+2;
    }
    cout<<d;
}
