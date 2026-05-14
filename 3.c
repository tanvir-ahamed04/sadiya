#include <stdio.h>

int main() {
    int n, num, pos = 0, neg = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        if(num > 0) pos++;
        else if(num < 0) neg++;
    }
    
    printf("Positive: %d, Negative: %d\n", pos, neg);
    return 0;
}