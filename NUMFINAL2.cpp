#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    long long a1=a[a.size()-1]-48;
    long long b1=(b[b.size()-2]-48)*10+(b[b.size()-1]-48);
    if(a1==0||a1==1||a1==5||a1==6)
    {
        cout<<a1; return 0;
    }
    else
    {
        if((b1-1)%4==0)
        {
            cout<<a1; return 0;
        }
        if((b1-3)%4==0)
        {
            if(a1==3)
            {
                cout<<7; return 0;
            }
            if(a1==7)
            {
                cout<<3; return 0;
                }
            if(a1==2)
            {
                cout<<8; return 0;
            }
            if(a1==8)
            {
                cout<<2; return 0;
            }
        }
        if(a1==4&&b1%2==0)
        {
            cout<<6; return 0;
        }
        if((a1==4||a1==9)&&(b1%2==1))
        {
            cout<<a1; return 0;
        }
        if((a1==3||a1==7||a1==9)&&(b1%4==0))
        {
            cout<<1; return 0;
        }
        if((a1==2||a1==8)&&(b1%4==0))
        {
            cout<<6; return 0;
        }
    }
}
