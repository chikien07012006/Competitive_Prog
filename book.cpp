#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n, greater<int>());
    for(int j=0;j<n;j++)
    {
        if((j+1)%3!=0)
        {
            t=t+a[j];
        }
    }
    cout<<t;
}
