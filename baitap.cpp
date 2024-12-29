#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<long long>a;
int main()
{
    long long n,t,min=999999999,vt;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            vt=i;
        }
    }
    cout<<min<<endl<<vt; return 0;
}
