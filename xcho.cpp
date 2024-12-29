#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        long long q=t%12;
        if(q==1) cout<<t+11<<' '<<"WS"<<endl;
        if(q==2) cout<<t+9<<' ' <<"MS"<<endl;
        if(q==3) cout<<t+7<<' '<<"AS"<<endl;
        if(q==4) cout<<t+5<<' '<<"AS"<<endl;
        if(q==5) cout<<t+3<<' '<<"MS"<<endl;
        if(q==6) cout<<t+1<<' '<<"WS"<<endl;
        if(q==7) cout<<t-1<<' '<<"WS"<<endl;
        if(q==8) cout<<t-3<<' '<<"MS"<<endl;
        if(q==9) cout<<t-5<<' '<<"AS"<<endl;
        if(q==10) cout<<t-7<<' '<<"AS"<<endl;
        if(q==11) cout<<t-9<<' '<<"MS"<<endl;
        if(q==0) cout<<t-11<<' '<<"WS"<<endl;
    }
}
