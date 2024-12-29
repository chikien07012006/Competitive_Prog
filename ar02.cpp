int main ()
{
long long A[10000],i,n,j=0;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{
  scanf("%lld",&A[i]);
  if (A[i]%2!==0) j=j+A[i];
}
printf ("%lld",j);
}
