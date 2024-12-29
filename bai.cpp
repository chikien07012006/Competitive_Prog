#include<bits/stdc++.h>
using namespace std;
long long gq()
int main()
{
    long long n,max=-99999999,vt;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0&&a[i]>max)
        {
            max=a[i];
            vt=i;
        }
    }
    cout<<max<<endl<<vt;;
}
