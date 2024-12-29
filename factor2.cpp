#include<bits/stdc++.h>
using namespace std;
long long a[1000],n,h;
void sangngt()
{
    for(long long i=2;i<=1000;i++)if(a[i]==0)for(long long j=i*i;j<=1000;j=j+i)if(a[j]==0)a[j]=i;
    for(long long i=2;i<=1000;i++) if(a[i]==0) a[i]=i;
}
void xl()
{
    while(h/a[h]>1)
    {
        cout<<a[h]<<'.';
        h=h/a[h];
    }
    cout<<a[h]<<endl;
}
int main()
{
    ios_base::sync_with_stdio();
    sangngt();
    cin>>h;
    xl();
}
