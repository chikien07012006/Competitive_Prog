#include<stdio.h>

long long min(long long a, long long b)
{
    if (a<b) return a;
    return b;
}

int main()
{
    long long a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    printf("%lld", min(min(a, b), min(c, d)));
}
