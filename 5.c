#include <stdio.h>

int main() {
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    
    if(n != 0 && m % n == 0)
        printf("%d is multiple of %d\n", m, n);
    else
        printf("%d is NOT multiple of %d\n", m, n);
    return 0;
}