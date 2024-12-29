#include<stdio.h>
int main()
{
    long a[10000], n, i, dau=1, cuoi=n;
    scanf("%ld", &n);
    cuoi = n;
    for (i=1; i<=n; ++i) scanf("%ld", &a[i]);
    while (a[dau]<=0) ++dau;
    while (a[cuoi]<=0) --cuoi;
    printf("%ld %ld", dau, cuoi);
    return 0;
}
