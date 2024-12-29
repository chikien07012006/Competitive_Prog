#include<iostream>
#include<algorithm>
using namespace std;
struct khachhang{
    long long sotien,vitri;
};
bool ss(khachhang truoc,khachhang sau)
{
    if(truoc.sotien==sau.sotien) return truoc.vitri<sau.vitri;
    return truoc.sotien>sau.sotien;
}
int main()
{
 //   long long res=LONG_LONG_MIN;
 ios_base::sync_with_stdio();
 long long n,k;
 cin>>n>>k; khachhang a[n]; long long b[k];
 for(long long i=1;i<=n;i++){cin>>a[i].sotien; a[i].vitri=i;}
 sort(a+1,a+1+n,ss);
 for(long long i=1;i<=k;i++)
 {
     b[i]=a[i].vitri;
 }
 sort(b+1,b+1+k);
 for(long long i=1;i<=k;i++) cout<<b[i]<<' ';
}
