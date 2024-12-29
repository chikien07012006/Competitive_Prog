#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long a1,a2,b1,b2,c1,c2,d1,d2,t1,t2,t3,t4,t=1e9;
    cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;
    t1=abs(a1-d1);t2=abs(a2-b2);t3=abs(b1-c1);t4=abs(c2-d2);
    if(t1==t2&&t1==t3&&t1==t4&&t1!=0){cout<<t1*t1;return 0;}
    t1=abs(a2-d2);t2=abs(a1-b1);t3=abs(b2-c2);t4=abs(c1-d1);
    if(t1==t2&&t1==t3&&t1==t4&&t1!=0){cout<<t1*t1;return 0;}
    cout<<-1;
    //datebayo
}
