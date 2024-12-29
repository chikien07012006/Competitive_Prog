#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,t,t1;
    cin>>m>>n;
    t=((m*4)-n)/2;
    t1=m-t;
    if(t*2+t1*4!=n)
    {
        cout<<-1;
        return 0;
    }
    cout<<t<<' '<<t1;
}
