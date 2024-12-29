#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(abs(a-b)%(c+d)==0){cout<<"YES"<<endl<<abs(a-b)/(c+d);return 0;}
    cout<<"NO";
}
