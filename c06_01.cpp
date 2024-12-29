#include<stdio.h>

int main()
{
    long long n=1, s=0;
    do
    {
        scanf("%lld", &n);
        s+=n;
    } while (n!=0);
    printf("%lld", s);
}
