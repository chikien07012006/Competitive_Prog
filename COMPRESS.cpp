#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,c=0,b=0,d=0;
    cin>>n; string a[n],ct;
    for(int i=0;i<n;i++) {cin>>a[i];}
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            if(a[i][j]==a[i+1][0])
            {
                if(a[i].substr(j,a[i].size()-j)==a[i+1].substr(0,a[i].size()-j))
                {
                    a[i+1]=a[i+1].erase(0,a[i].size()-j);break;
                }
            }
        }
        ct=ct+a[i];
    }
    cout<<ct+a[n-1];
}
