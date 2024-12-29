#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string a="CHAO_MUNG_CAC_THAY_CO_VA_CAC_EM.";
    long long n;
    cin>>n; n=n%a.size();
    string t=a.substr(0,n);
    string t1=a.substr(n,a.size());
    cout<<t1+t;
}
