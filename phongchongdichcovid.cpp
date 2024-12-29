#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
ll d[10];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,t=0,t1=0,fl,re=0; vao n; ll a[n+5];

    For(i,1,n) vao a[i],d[a[i]]++;

    re=re+d[4];
    re=re+d[3];
    d[1]=d[1]-d[3];
    re=re+d[2]/2;
    if(d[2]%2==1) {re++;d[1]=d[1]-2;}
    if(d[1]>0)
    {
        re=re+((d[1]-1)/4)+1;
    }
    cout<<re;
}


