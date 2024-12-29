#include<bits/stdc++.h>
using namespace std;
string xlx(string x)
{
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='A'||x[i]=='a'||x[i]=='B'||x[i]=='b'||x[i]=='C'||x[i]=='c')
        {
            x[i]='2'; continue;
        }
        if(x[i]=='D'||x[i]=='d'||x[i]=='E'||x[i]=='e'||x[i]=='F'||x[i]=='f')
        {
            x[i]='3';continue;
        }
        if(x[i]=='G'||x[i]=='H'||x[i]=='I'||x[i]=='g'||x[i]=='h'||x[i]=='i')
        {
            x[i]='4';continue;
        }
        if(x[i]=='J'||x[i]=='K'||x[i]=='L'||x[i]=='j'||x[i]=='k'||x[i]=='l')
        {
            x[i]='5';continue;
        }
        if(x[i]=='M'||x[i]=='N'||x[i]=='O'||x[i]=='m'||x[i]=='n'||x[i]=='o')
        {
            x[i]='6';continue;
        }
        if(x[i]=='P'||x[i]=='Q'||x[i]=='R'||x[i]=='S'||x[i]=='p'||x[i]=='q'||x[i]=='r'||x[i]=='s')
        {
            x[i]='7';continue;
        }
        if(x[i]=='T'||x[i]=='U'||x[i]=='V'||x[i]=='t'||x[i]=='u'||x[i]=='v')
        {
            x[i]='8';continue;
        }
         x[i]='9';
    }
    return x;
}
bool xtn(string x)
{
    string y;
    for(int i=x.size()-1;i>=0;i--)
    {
        y=y+x[i];
    }
    if(x==y) return true;
    return false;
}
int main()
{
    long long k; string n;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>n;
        n=xlx(n);
        if(xtn(n)==true) {cout<<"YES"<<endl; continue;}
        cout<<"NO"<<endl;
    }
    }
