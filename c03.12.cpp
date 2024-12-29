#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;int n,d=0;
    cin>>ch>>n;
    if(ch+n>122)
    {
        while(1)
        {
            //ch++;
            //d++;
            if(ch==122)
            {
                ch=96;
            }
            ch++;
            d++;
            if(d==n)
            {
                cout<<ch;
                return 0;
            }
        }
    }
    else
    cout<<char(ch+n);
}
