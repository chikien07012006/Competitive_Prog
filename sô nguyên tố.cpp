#include<stdio.h>
#include<math.h>
bool snt(long long x)
{
    for (int i=2;i<=sqrt(x);i++)
        if (x%i==0) return false;
    return true;
}
int main()
{
    long long n,a[100000],kq=0;
    scanf("%lld\n",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        if (snt(a[i])==true)
            if (a[i]>kq) kq=a[i];
    }
    printf("%lld\n",kq);
    for (int k=1;k<=n;k++)
        if (a[k]==kq) printf("%lld ",k);
    return 0;
}
