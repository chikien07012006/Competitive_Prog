#include<bits/stdc++.h>
using namespace std;
string a[10];
int main()
{
    ios_base::sync_with_stdio(0);
    string b,max="0";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    long long k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>b;
        for(int j=0;j<b.size();j++)
        {
            int tam=b[j]-48;
            if(a[tam]>max)
            {
                max=a[tam];
            }
        }
        cout<<max<<endl;
        max="0";
    }
}
