#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==1){cout<<0<<' '<<1;return 0;}
    if(n==0){cout<<0<<' '<<2;return 0;}
    if(n==3){cout<<0<<' '<<3;return 0;}
    if(n==4){cout<<0<<' '<<4;return 0;}
    if(n==5){cout<<0<<' '<<5;return 0;}
    if(n==6){cout<<1<<' '<<2;return 0;}
    if(n%7==0){cout<<n/7+n/7<<' '<<n/7+n/7;return 0;}
    if(n%7==1){cout<<n/7+n/7<<' '<<n/7+n/7+1;return 0;}
    if(n%7==6){cout<<n/7+n/7+1<<' '<<n/7+n/7+2;return 0;}
    else{cout<<n/7+n/7<<' '<<n/7+n/7+2;}
}
