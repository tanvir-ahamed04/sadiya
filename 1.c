#include <stdio.h>

int main() {
    float distance, time, speed;
    printf("Enter distance (km): ");
    scanf("%f", &distance);
    printf("Enter time (hr): ");
    scanf("%f", &time);
    
    speed = distance / time;
    printf("Speed = %.2f km/hr\n", speed);
    return 0;
}
