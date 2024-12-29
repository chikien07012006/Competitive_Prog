#include<stdio.h>
int a[100000000];
int main()
{
 int n;
 float s=0, d=0;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
     scanf("%d",&a[i]);
 }
for(int i=1;i<n;i++)
 if(a[i]<0)
 {
     s=s+a[i];
     d++;
 }
 printf("%.2f",s/d);
}
