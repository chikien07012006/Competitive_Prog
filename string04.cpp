#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string a,b="                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ";
    int j=0;
    getline(cin,a);

    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=' ')
        {
            b[j]=a[i];
            j++;
        }
        else    //ky tu      dang xet la ' '
        {
            if(a[i-1]!=' ')
            {
                b[j]=' ';
                j++;

            }
            else
                {
                    ;
                }
        }
    }
    cout<<b;

}
