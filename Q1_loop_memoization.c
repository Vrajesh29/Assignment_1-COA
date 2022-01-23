#include<stdio.h> 
#include<time.h>   
int main()    
{    
 int F[99],i; 
 double time_spent=0.0;  
 clock_t begin = clock(); 
 printf("\n%d %d",0,1);
 F[0]=0;
 F[1]=1;   
 for(i=2;i<100;++i) 
 {    
  F[i]=F[i-1]+F[i-2];    
  printf(" %d ",F[i]);        
 }  
 clock_t end = clock();
 time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
 printf("%f", time_spent);
  return 0;  
 }
