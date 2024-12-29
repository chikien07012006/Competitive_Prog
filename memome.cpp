#include<bits/stdc++.h>
int a[1000];
int c[1000];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,q,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>m;
        if(c[m]==0){cout<<"NOT PRESENT"<<endl;}
        else{cout<<c[m]<<endl;}
    }
}
