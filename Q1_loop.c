#include<stdio.h> 
#include<time.h>   
int main()    
{    
 long double n1,n2,n3,i; 
 double time_spent=0.0;  
 clock_t begin = clock(); 
 printf("\n%d %d",0,1);
 n1=0;
 n2=1;   
 for(i=2;i<100;++i) 
 {    
  n3=n1+n2;
  n1=n2;
  n2=n3;
  printf(" %Lf ",n3);        
 }  
 clock_t end = clock();
 time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
 printf("\n%f", time_spent);
  return 0;  
 }
