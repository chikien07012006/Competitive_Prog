#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
long long pow(long long a, long long b, long long c)
{
    if(a==1&&b==1&&c==1) return 0;
    if(b==1){return a;}
    else
    {
        long long s=pow(a,b/2,c);
        if(b%2==0)
        {
            return (s%c+s%c)%c;
        }
        else
        {
            return (s%c+s%c+a%c)%c;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    ll t=pow(a,b,d),t1=pow(a,c,d),t2=pow(b,c,d);
    cout<<max(t,max(t1,t2));
}
