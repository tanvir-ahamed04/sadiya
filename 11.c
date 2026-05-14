#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 2; i <= n; i++) {
        isPrime = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}