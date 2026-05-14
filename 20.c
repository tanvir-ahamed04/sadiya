#include <stdio.h>
#include <math.h>

int main() {
    float lambda, t, r;
    printf("Enter failure rate (λ) and time (t): ");
    scanf("%f %f", &lambda, &t);
    
    r = exp(-lambda * t);
    printf("Reliability r = %.4f\n", r);
    return 0;
}