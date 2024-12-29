#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,d=0;
    cin>>n>>k;
    while(d<k)
    {
        if(n%10==0){d++;n=n/10;}
        else{d++;n--;}
    }
    cout<<n;
}
