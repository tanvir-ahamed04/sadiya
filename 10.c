#include <stdio.h>

int main() {
    float percent;
    printf("Enter percentage: ");
    scanf("%f", &percent);
    
    if(percent >= 80)
        printf("First division\n");
    else if(percent >= 60)
        printf("Second division\n");
    else
        printf("Third division\n");
    return 0;
}