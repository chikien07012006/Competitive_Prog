#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,y,x;
    cin>>k;
    y=k/4;
    if(k==3)
    {
    cout<<7;
    return 0;
    }
    if(k%4==1)
    {
        cout<<y*10+1;
    }
    if(k%4==0)
    {
        cout<<y*10-1;
    }
    if(k%4==2)
    {
        cout<<y*10-7+10;
    }
    if(k%4==3)
    {
        cout<<y*10+7;
    }
}
