#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll a,b,c; vao a>>b>>c;
    if(b>a) swap(a,b);
    if(c>a) swap(a,c);
    if(c>b) swap(b,c);
    if(b+c>a) ra 0;
    else
    {
        ra a-(b+c-1);
    }
}

