#include<bits/stdc++.h>
using namespace std;
long long d[100000];
struct cay{
    long long a,b;
};
bool sosanh(cay truoc,cay sau)
{
    if(truoc.a==sau.a) return truoc.b<sau.b;
    else return truoc.a<sau.a;
}
cay a[100000];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t=0;
    cin>>n;
    for(long long i=1;i<=n;i++){cin>>a[i].a;a[i].b=i;}
    sort(a+1,a+1+n,sosanh);
    for(long long i=1;i<=n;i++)
    {
        if(d[a[i].b]==0)
        {
            t++;
            d[a[i+1].b]=1;d[a[i-1].b]=1;
        }
    }
    cout<<t; return 0;
}
