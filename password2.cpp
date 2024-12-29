#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool ktnt(long long a)
{
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    string a; long long tam=0,ma=0;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            for(int j=i;j<a.size();j++)
            {
                if((j==i+8)||(a[j]<'0'||a[j]>'9')) { tam=0;break;}
                else
                {
                    tam=tam*10+(a[j]-48);
                    if(ktnt(tam)==true)
                    {
                        if(tam>ma)
                        {
                        ma=tam;
                        }
                    }
                }
            }
            tam=0;
        }
    }
    cout<<ma;
}
