#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    
   
    int **a = (int**)malloc(m * sizeof(int*));
    int **b = (int**)malloc(m * sizeof(int*));
    int **sum = (int**)malloc(m * sizeof(int*));
    int **diff = (int**)malloc(m * sizeof(int*));
    
    for(i = 0; i < m; i++) {
        a[i] = (int*)malloc(n * sizeof(int));
        b[i] = (int*)malloc(n * sizeof(int));
        sum[i] = (int*)malloc(n * sizeof(int));
        diff[i] = (int*)malloc(n * sizeof(int));
    }
    
    printf("Matrix A:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++) 
            scanf("%d", &a[i][j]);
    
    printf("Matrix B:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++) 
            scanf("%d", &b[i][j]);
    
    printf("Sum:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    printf("Difference (A - B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    
    
    for(i = 0; i < m; i++) {
        free(a[i]);
        free(b[i]);
        free(sum[i]);
        free(diff[i]);
    }
    free(a); free(b); free(sum); free(diff);
    
    return 0;
}