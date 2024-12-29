#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,m,tam;
    long long j=0,k=0;
    char a;
    getline(cin,n);
    cin>>a;
    for(int i=0;i<n.size();i++)
    {
        while(n[i]!=' ')
        {
         tam[j]=n[i];
         j++;
         i++;
        }
        if(tam[0]==a)
        {
            for(int i=0;i<j;i++)
            {
                m[k]=tam[i];
                k++;
            }
        }
        tam='                                        ';
        j=0;
    }
    cout<<m;
}
