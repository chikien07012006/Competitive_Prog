#include<bits/stdc++.h>
using namespace std;
ll d[25],a[25],t[105],n,L,b[10000000];
void kq()
{
    for(int i=0;i<=n;i++)d[i]=0;
    for(int i=1;i<=L;i++)
    {
        if(t[i]!=0&&t[i-1]!=t[i]&&d[t[i]]>0)return ;
        d[t[i]]++;
    }
    for(int i=1;i<=n;i++)if(a[i]!=d[i])return ;
    if(t[1]==0)return ;
    for(int i=1;i<=L;i++)cout<<t[i]<<' ';
    cout<<endl;
    dem++;
    if(dem==1000)exit(0);
}
void sinh(int i,int L)
{
    for(int j=0;j<=n;j++)
    {
     b[i]=j;
     if(i==L)kq();
     else sinh(i+1,L);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>L>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sinh(1,L);
}
