#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    double time_spent=0.0;  
    clock_t begin = clock();
    int i,j,k,n;
    printf("Enter n:");
    scanf("%d", &n);
    double m1[n][n];
    double m2[n][n];
    srand(time(0));
    for(i = 0; i < n;i++) {
    	for(j = 0; j < n;j++) {
    	    m1[i][j]=rand();
    	    m2[i][j]=rand();
    	}
    }
    double res[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            res[i][j] = 0;
            for (k = 0; k < n; k++)
                res[i][j] += m1[i][k] * m2[k][j];
        }
    }
    
    printf("Matrix_1:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%f ", m1[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("\n");
    
    printf("Matrix_2:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%f ", m2[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("\n");
    
    printf("Result:");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%f ", res[i][j]);
        printf("\n");
    }
    printf("\n");
    clock_t end = clock();
    time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
    printf("%f", time_spent);
    return 0;
}
