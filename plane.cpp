#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int k=0;
    cin>>a;
    cin>>b;
    for(int i=0;i<=a.size()-1;i++)
    {
        if(b[k]==a[i])
        {
            k++;
            if(k==b.size())
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");

}
