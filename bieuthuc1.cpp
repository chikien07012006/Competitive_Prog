#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll b,k;
int f[25],a[25];
void sinh(int i,int n)
{
    for(int j=1;j>=0;j--)
    {
        f[i]=j;
        if(i==n)
        {
            ll t=a[1];
            for(int i=1;i<=n;i++)
            {
                if(f[i]==1)t=t+a[i+1];
                else t=t-a[i+1];
            }
            if(t==k)
            {
                cout<<a[1];
                for(int i=1;i<=n;i++)
                {
                    if(f[i]==1)cout<<"+"<<a[i+1];
                    else cout<<"-"<<a[i+1];
                }
                cout<<"\n";
            }
        }
        else
        {
            sinh(i+1,n);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>b>>k;
    for(int i=1;i<=b;i++){cin>>a[i];}
    for(int i=2;i<=b;i++)a[i]=abs(a[i]);
    sinh(1,b-1);
}
