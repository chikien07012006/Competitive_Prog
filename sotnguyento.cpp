#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
bool ktsnt(ll n)
{
    if(n<2)return 0;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,re=0; vao n;
    ll i=2;
    while(i*i<=n)
    {
        if(ktsnt(i)==1) re++;
        i++;
    }
    cout<<re;
}


