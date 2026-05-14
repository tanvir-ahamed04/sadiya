#include <stdio.h>

int main() {
    int n = 1;
    while(n * n < 100) {
        printf("%d ", n * n);
        n++;
    }
    printf("\n");
    return 0;
}