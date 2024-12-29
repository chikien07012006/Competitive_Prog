    #include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t=0,m=1;
    cin>>n;
    while(n>0)
    {
        t=t+(n%10)*m;
        m=m*3;
        n=n/10;
    }
    cout<<t;
}
