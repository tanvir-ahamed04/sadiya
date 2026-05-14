#include <stdio.h>

int main() {
    int n, i, sum_even = 0, sum_odd = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Even numbers: ");
    for(i = 2; i <= n; i += 2) {
        printf("%d ", i);
        sum_even += i;
    }
    
    printf("\nOdd numbers: ");
    for(i = 1; i <= n; i += 2) {
        printf("%d ", i);
        sum_odd += i;
    }
    
    printf("\nSum of evens = %d\n", sum_even);
    printf("Sum of odds = %d\n", sum_odd);
    return 0;
}
