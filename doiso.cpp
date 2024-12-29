#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    char a[n.size()];
    for(int i=0;i<n.size();i++)
    {
        a[i]=n[i];
    }
    sort(a,a+n.size(),greater<int>());
    for(int i=0;i<n.size();i++)
    {
        n[i]=a[i];
    }
    if(n%50==0&&n%51==0&&n%53==0)
    {
        cout<<n;
    }
    else{cout<<-1;}
}
