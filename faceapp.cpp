#include<iostream>
using namespace std;
typedef long long ll;
ll n,m,re=0;char a[55][55];
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;if(n==1||m==1){cout<<0;return 0;}for(ll i=1;i<=n;i++)for(ll j=1;j<=m;j++)cin>>a[i][j];
    for(ll i=1;i<=n-1;i++)
    {
        for(ll j=1;j<=m-1;j++)
        {
            ll f=0,a1=0,c=0,e=0;
            if(a[i][j]=='f')f++;if(a[i][j]=='a')a1++;if(a[i][j]=='c')c++;if(a[i][j]=='e')e++;
            if(a[i][j+1]=='f')f++;if(a[i][j+1]=='a')a1++;if(a[i][j+1]=='c')c++;if(a[i][j+1]=='e')e++;
            if(a[i+1][j]=='f')f++;if(a[i+1][j]=='a')a1++;if(a[i+1][j]=='c')c++;if(a[i+1][j]=='e')e++;
            if(a[i+1][j+1]=='f')f++;if(a[i+1][j+1]=='a')a1++;if(a[i+1][j+1]=='c')c++;if(a[i+1][j+1]=='e')e++;
         if(f==1&&a1==1&&c==1&&e==1)re++;
         else ;
        }
    }
    cout<<re;
}
