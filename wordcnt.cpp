#include<bits/stdc++.h>
using namespace std;
long long s[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n;
    cin>>n; string a;
    getline(cin,a);
    for(int q=0;q<n;q++)
    {
     long long d=0,k=0;
    getline(cin,a);
    for(int i=0;i<a.size();i++)
    {
        if(i==0||a[i-1]==' ')
        {
            for(int j=i;j<a.size();j++)
            {
                if(a[j]!=' ')
                {
                    d++;
                }
                if(a[j]==' '||j==a.size()-1)
            {
                s[k]=d;
                d=0;
                k++;
                break;
            }
            }
        }
    }
    long long d1=1,ma=0;
   for(int i=0;i<k-1;i++)
   {
       if(s[i]==s[i+1]) d1++;
       if(s[i]!=s[i+1]||i==k-2) {if(d1>ma){ma=d1;}d1=1;}
   }
   cout<<ma<<endl;;
    }
}
