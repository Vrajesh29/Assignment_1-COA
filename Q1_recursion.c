#include<stdio.h>
#include<time.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
 
int main ()
{
  double time_spent=0.0;  
  clock_t begin = clock();
  int n = 40;
  printf("%d", fib(n));
  clock_t end = clock();
  time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
  printf(" %f ", time_spent);
  return 0;
}
