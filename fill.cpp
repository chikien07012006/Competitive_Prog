#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    long tama=0,tamb=0,tamc=0;
    cin>>a>>b>>c;
    char tb[b.size()],ta[a.size()],tc[c.size()];
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='?')
        {
            tama=0;
            break;
        }
        else
        {
            tama=tama*10+(a[i]-48);
        }
    }
    for(int i=0;i<b.size();i++)
    {
     if(b[i]=='?')
     {
         tamb=0;
         break;
     }
     else
     {
         tamb=tamb*10+(b[i]-48);
     }
    }
    for(int i=0;i<c.size();i++)
    {
        if(c[i]=='?')
        {
            tamc=0;
            break;
        }
        else
        {
            tamc=tamc*10+(c[i]-48);
        }
    }
    if(tamb==0)
    {
            tamb=tamc-tama;
            for(int i=b.size()-1;i>=0;i--)
            {
                tb[i]=tamb%10+48;
                tamb=tamb/10;
            }
            for(int i=0;i<b.size();i++)
            {
                if(b[i]=='?')
                {
                    cout<<tb[i];
                    return 0;
                }
            }
    }
        if(tama==0)
    {
            tama=tamc-tamb;
            for(int i=a.size()-1;i>=0;i--)
            {
                ta[i]=tama%10+48;
                tama=tama/10;
            }
            for(int i=0;i<a.size();i++)
            {
                if(a[i]=='?')
                {
                    cout<<ta[i];
                    return 0;
                }
            }
    }
            if(tamc==0)
    {
            tamc=tama+tamb;
            for(int i=c.size()-1;i>=0;i--)
            {
                tc[i]=tamc%10+48;
                tamc=tamc/10;
            }
            for(int i=0;i<c.size();i++)
            {
                if(c[i]=='?')
                {
                    cout<<tc[i];
                    return 0;
                }
            }
    }
}
