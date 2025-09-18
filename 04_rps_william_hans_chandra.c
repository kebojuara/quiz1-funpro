#include <stdio.h>

int main() {
    int player1=0;
    int player2=0;

    printf ("1 for Rock 2 for Paper, 3 for Scissors\n");

    do {
        printf("Player 1: ");
        scanf("%d", &player1);
        if(player1<1||player1>3){
            printf("Enter a valid input!\n");
        }
    } while(player1<1||player1>3);

    do {
        printf("Player 2: ");
        scanf("%d", &player2);
        if(player2<1||player2>3){
            printf("Enter a valid input!\n");
        }
    } while(player2<1||player2>3);

    if(player1==player2){
            printf("Draw\n");
    }
    else if((player1==1&&player2==3)||(player1==2&&player2==1)||(player1==3&&player2==2)){
        printf("Player 1 win\n");
    }
    else {
        printf("Player 2 win\n");
    }

    return 0;
}
