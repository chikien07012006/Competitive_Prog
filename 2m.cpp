#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,flaga=0,flagb=0,sa=0,sb=0,da=0,db=0;
    cin>>k;
    long long a[k],b[k];
    for(int i=0;i<k;i++) {cin>>a[i]; if(a[i]==-1){flaga=1; da++;} if(a[i]!=-1)sa=sa+a[i];}
    for(int i=0;i<k;i++) {cin>>b[i]; if(b[i]==-1){flagb=1; db++;} if(b[i]!=-1)sb=sb+b[i];}
    if(flaga==1&&flagb==1){cout<<"Infinite"; return 0;}
    if(flaga==1)
    {
        cout<<sb-sa/da; return 0;
    }
    cout<<sa-sb/db; return 0;
}
