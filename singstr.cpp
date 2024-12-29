#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string a; long long l=0,r=0,tam,flag=0,d=1,ma=0;
    cin>>a;
    while(l<=a.size()-1)
    {
        for(int i=r;i<=l;i++)
        {
         //   cout<<a[l+1]<<endl;
            if(a[i]==a[l+1])
            {
             //   cout<<a[l+1]<<endl;
                flag=1; tam=i+1; break;
            }
        }
        if(flag==0)
        {
            d++; l++;
        }
        if(flag==1||l==a.size()-1)
        {
            if(d>ma) ma=d;
            r=tam;
            d=l-tam+1; flag=0;
        //    cout<<d<<endl;
        }
    }
    cout<<ma;
}
