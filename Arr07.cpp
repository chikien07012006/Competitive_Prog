#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long q,k,l=1,n=1,t=0,l1,n1,mi=100001;
    cin>>q>>k; long long a[q];
    for(int i=1;i<=q;i++) cin>>a[i];
    while(l<=q)
    {
        if(t<k)
        {
         t=t+a[l];
        }
        if(t>=k)
        {
            if((l-n+1)<=mi)
            {
                l1=l;n1=n;mi=l-n+1;
            }
            t=t-a[n]; n++;
        }
        if(t<k) l++;
    }
    cout<<mi<<endl; //cout<<n1<<' '<<l1;
    for(int i=n1;i<=l1;i++) cout<<a[i]<<' ';
}
