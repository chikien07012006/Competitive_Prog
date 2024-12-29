#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;long tam=0;
    cin>>p;
    for(int i=0;i<p.size();i++)
    {
        if(p[i]>=48&&p[i]<=57)
        {
            tam=tam*10+(p[i]-48);
        }
        if(tam>=97&&tam<=122)
        {
            cout<<char(tam);
            tam=0;
        }
    }
}
