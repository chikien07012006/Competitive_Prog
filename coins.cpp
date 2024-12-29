#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("COINS.INP","r",stdin);
    freopen("COINS.OUT","w",stdout);
    long long a,b,c,m;
    cin>>a>>b>>c;
    b>a;
    m=c-b;
    if(m%a==0)
    {
        cout<<m/a+1;
    }
    else{cout<<-1;}

}





