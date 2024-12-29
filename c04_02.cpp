#include<stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a>=b && a>=c) printf("%lld", a);
    else if (b>=c && b>=a) printf("%lld", b);
    else if (c>=b && c>=a) printf("%lld", c);
    return 0;
}
