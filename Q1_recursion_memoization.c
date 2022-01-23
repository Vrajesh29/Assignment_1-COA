#include<stdio.h>   
 #include<time.h> 
int F[99];
int printFibonacci(int n){    
    if(F[n]==0){
        if(n<=1){
            F[n]=n;
        }
        else{
            F[n]=F[n-1]+F[n-2];
        }
    }
    return F[n];
}    
int main(){     
    double time_spent=0.0;  
    clock_t begin = clock();
    int n=100;
    int i;
    for(i=0;i<100;i++){
        F[i]=0;
    }
    printFibonacci(n); 
    clock_t end = clock();
    time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
    printf(" %f ", time_spent);
  return 0;  
 } 
