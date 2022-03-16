#include<stdio.h>
int input_number()
{
  int n;
  printf("enter any number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
 for(int i=2;i<n/2;i++)
  {
  if (n%i==0)
  return 0;
  } 
}
void output(int n, int is_prime)
{
if (is_prime==0)
printf("%d is not aprime number.",n);
else
printf("%d is a prime number.",n);
}
int main()
{
int n,res;
n=input_number();
res= is_prime(n);
output( n, res);
return 0;
}