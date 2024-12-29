#include<stdio.h>
long long n,scc,tbp,d=0;
int sodep(int x)
{
    tbp=0;
      while(x>0)
      {
        scc=x%10;
        x=x/10;
        tbp=tbp+scc*scc;
      }
      if (tbp < 2) return 0;
      for(int i=2;i<tbp;i++)
      {
          if (tbp%i==0)
          {
              return false;
          }
      }
      return true;
}
int main()
{
    scanf("%lld",&n);
    for(int j=1;j<=1000000;j++)
    {
        if(sodep(j)==true) d++;
        if(d==n)
        {
            printf("%d",j);
            return 0;
        }
    }

}
