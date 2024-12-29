#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string a;while(cin>>a){
    long long i=0,j=a.size()-1,d=0,fl=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]!=a[j])d++;
        if(d==3){fl=1;break;}
        if(j-i<=1)break;
        j--;
    }
    if(fl==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;}
}
