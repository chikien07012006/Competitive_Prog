#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long a,b,c,d,t=LONG_LONG_MAX;
    cin>>a>>b>>c>>d;t=min(t,a);t=min(t,b);t=min(t,c);t=min(t,d);
    if(t==a){cout<<(b-t)+(c-t)+(d-t);}
    if(t==b){cout<<(a-t)+(c-t)+(d-t);}
    if(t==c){cout<<(b-t)+(a-t)+(d-t);}
    if(t==d){cout<<(b-t)+(c-t)+(a-t);}
}
