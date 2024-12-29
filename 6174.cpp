#include<bits/stdc++.h>
using namespace std;
string h2x(string a, string b)
{
    string hcnt;
    int nho=0;
    for(int i=4;i>=0;i++)
    {
        hcnt[i] = a[i]-b[i]-nho;
        if (hcnt[i]<0) {
            hcnt[i]+=10;
            nho++;
        }
    }
    return hcnt;
}
int main()
{

}

6421
1246
