#include<stdio.h>   
#include<time.h> 

int F[100];
int fib(int n)
{
    if (n <= 1)
        return n;
    if (F[n] != 0)
        return F[n];
 
    else {
        F[n] = fib(n - 1) + fib(n - 2);
 
        return F[n];
    }
}

int main()
{
    double time_spent=0.0;  
    clock_t begin = clock();
    int n = 100;
    printf("%d", fib(n));
    clock_t end = clock();
    time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
    printf(" %f ", time_spent);
    return 0;
}
