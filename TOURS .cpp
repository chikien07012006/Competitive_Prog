#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;float m=LONG_LONG_MAX;long long t,t1;
    cin>>n; float a[n],b[n],c[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<=n;i++) {cin>>b[i];c[i]=b[i]/a[i];cout<<c[i]<<endl;}return 0;
    for(long long i=1;i<=n;i++)
    {
        if(c[i]<=m)
        {
            if(c[i]==m)
            {
                if(a[t]<a[i])
                {
                    t=i;
                }
            }
            else
            {m=c[i];t=i;}
        }
    }
    m=LONG_LONG_MAX;
    for(long long i=1;i<=n;i++)
    {
        if(i==t);
        else
        {
         if(c[i]<=m)
        {
            if(c[i]==m)
            {
                if(a[t1]<a[i])
                {
                    t1=i;
                }
            }
            else
            {m=c[i];t1=i;}
        }
        }
    }
    cout<<int(a[t])+int(a[t1])<<' '<<int(b[t])+int(b[t1]);
}
