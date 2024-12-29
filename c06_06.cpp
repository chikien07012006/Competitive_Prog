#include<stdio.h>
#include<math.h>

long gcd(long a, long b)
{
    if (a%b==0) return b;
    return gcd(b, a%b);
}

int main()
{
    long m, n, k;
    scanf("%ld%ld", &m, &n);
    k=gcd(m, n);
    long sq=sqrt(k), i=1;
    while (i<=sq)
    {
        if (k%i==0) printf("%ld ", i);
        i++;
    }
    i=sq;
    if (sq*sq==k) i--;
    while (i>=1)
    {
        if (k%i==0) printf("%ld ", k/i);
        i--;
    }
    return 0;
}



