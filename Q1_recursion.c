#include<stdio.h>
#include<stdio.h>
#include<time.h>
long double fib(long double n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
 
int main ()
{
  long double n=40;
  double time_spent=0.0;  
  clock_t begin = clock();
  printf("%Lf", fib(n));
  clock_t end = clock();
  time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
  printf(" %f ", time_spent);
  return 0;
}
