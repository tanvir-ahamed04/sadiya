#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    int max = arr[0], min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) 
            max = arr[i];
        if(arr[i] < min) 
            min = arr[i];
    }
    
    printf("Largest = %d, Smallest = %d\n", max, min);
    
    free(arr); 
    return 0;
}