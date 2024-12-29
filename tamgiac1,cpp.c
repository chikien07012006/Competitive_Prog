#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,re=0; vao n;
    For(i,1,n-1)
    {
        re=re+gth(i,n-1);
    }
    cout<<re;
}

