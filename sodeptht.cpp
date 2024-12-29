#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
ll d[20];
bool kt(ll n)
{
    For(i,0,20) d[i]=0;
    while(n>0)
    {
        d[n%10]++;
        if(d[n%10]==2) return 0;
        n=n/10;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n;
    while(vao n)
    {
        if(n==0) break;
        if(kt(n)==0) ra "No"<<endl;
        else
        {
            ra "Yes"<<' '; n++;
            while(kt(n)==0)n++;
            ra n<<endl;
        }
    }
}
