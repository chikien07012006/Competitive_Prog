#include<bits/stdc++.h>
using namespace std;
string chia(string a)
{
    string t="";long long s=0,k,i=0,flag=0;
    while(i<=a.size()-1)
    {
        if((a[0]-48)<2&&flag==0)
        {
            s=s+(a[0]-48);i=1;flag=1;
        }
        s=s*10+(a[i]-48);
        k=s/2;
        t=t+char(k+48);
        s=s-((s/2)*2);
        i++;
    }
    return t;
}
int main()
{
    ios_base::sync_with_stdio(0);
    string a;
    cin>>a;long long res=0,t=0;
    while(1)
    {
        if((a[a.size()-1]-48)%2==1)res++;
        //cout<<a[a.size()-1]-48<<endl;
        a=chia(a);
        if(a.size()==1)
        {
            t=t+(a[0]-48);
            if(t<=0) break;
        }
    }
    cout<<res;
}
