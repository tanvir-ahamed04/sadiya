#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int attempts = 0;
    
    while(attempts < 3) {
        printf("Who is the inventor of C? ");
        scanf("%s", answer);
        
        if(strcmp(answer, "DennisRitchie") == 0 || strcmp(answer, "Dennis Ritchie") == 0) {
            printf("Good\n");
            return 0;
        } else {
            printf("Try again\n");
            attempts++;
        }
    }
    
    printf("Correct answer is Dennis Ritchie\n");
    return 0;
}