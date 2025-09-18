#include <stdio.h>

int main(){
    int answer;
    int guess;

    printf("Answer: ");
    scanf("%d", &answer);
    do {
            printf("Guess: ");
            scanf("%d", &guess);
            if(guess<answer){
                printf("Your guess is too low!\n");
                }
                else if(guess>answer){
                        printf("Your guess is too high!\n");
                        }
                        else {
                                printf("Congratulations! Your guess is correct!\n");
                        }
    } while(guess!=answer);

    return 0;
}
