#include<stdio.h>
#include<math.h>
bool nt(int x)
{
    if(x<2) return 0;
    for (int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
    return 1;
}
int main()
{
    printf("%d",nt(19));
}
