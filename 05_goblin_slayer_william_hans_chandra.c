#include <stdio.h>

int main() {
    int boyhp=200;
    int goblin1hp=165,goblin2hp=165,goblin3hp=165;
    int goblin1attack=3,goblin2attack=4,goblin3attack=1;
    int boyattack=10,boyskill=20;

    int turn=1;
    int skillready=0;

    while(boyhp>0&&(goblin1hp>0||goblin2hp>0||goblin3hp>0)){
        printf("turn %d\n", turn);

        skillready+=1;
        skillready%=3;

        if(goblin1hp>0)
            {
                if(skillready==0)
                {goblin1hp-=boyskill;
                if(goblin1hp>0){
                    printf("boy uses skill and attacked goblin 1 for %d damage; goblin 1 hp: %d\n",boyskill,goblin1hp);
                }
                else
                    {
                    printf("boy uses skill and attacked goblin 1 for %d damage; goblin 1 has been slain.\n",boyskill);
                }
            } else {
                goblin1hp-=boyattack;
                if(goblin1hp>0){
                    printf("boy attacked goblin 1 for %d damage; goblin 1 hp: %d\n",boyattack,goblin1hp);
                }
                else {
                    printf("boy attacked goblin 1 for %d damage; goblin 1 has been slain.\n",boyattack);
                }
            }
        }
        else if(goblin2hp>0)
            {
                if(skillready==0)
                {goblin2hp-=boyskill;
                if(goblin2hp>0){
                    printf("boy uses skill and attacked goblin 2 for %d damage; goblin 2 hp: %d\n",boyskill,goblin2hp);
                }
                else
                    {
                    printf("boy uses skill and attacked goblin 2 for %d damage; goblin 2 has been slain.\n",boyskill);
                }
            } else {
                goblin2hp-=boyattack;
                if(goblin2hp>0){
                    printf("boy attacked goblin 2 for %d damage; goblin 2 hp: %d\n",boyattack,goblin2hp);
                }
                else {
                    printf("boy attacked goblin 2 for %d damage; goblin 2 has been slain.\n",boyattack);
                }
            }
        }
        else if(goblin3hp>0)
            {
                if(skillready==0)
                {goblin3hp-=boyskill;
                if(goblin3hp>0){
                    printf("boy uses skill and attacked goblin 3 for %d damage; goblin 3 hp: %d\n",boyskill,goblin3hp);
                }
                else
                    {
                    printf("boy uses skill and attacked goblin 3 for %d damage; goblin 3 has been slain.\n",boyskill);
                }
            } else {
                goblin3hp-=boyattack;
                if(goblin3hp>0){
                    printf("boy attacked goblin 3 for %d damage; goblin 3 hp: %d\n",boyattack,goblin3hp);
                }
                else {
                    printf("boy attacked goblin 3 for %d damage; goblin 3 has been slain.\n",boyattack);
                }
            }
        }

        if(goblin1hp>0){
            boyhp-=goblin1attack;
            printf("goblin 1 attacked boy for %d damage; boy hp: %d\n",goblin1attack,boyhp);
        }
        if(goblin2hp>0){
            boyhp-=goblin2attack;
            printf("goblin 2 attacked boy for %d damage; boy hp: %d\n",goblin2attack,boyhp);
        }
        if(goblin3hp>0){
            boyhp-=goblin3attack;
            printf("goblin 3 attacked boy for %d damage; boy hp: %d\n",goblin3attack,boyhp);
        }

        turn++;
    }

    if(boyhp>0){
        printf("the boy wins after %d turns with %d hp remaining.\n",turn-1,boyhp);
    }
    else if (goblin1hp>0){
        printf("the goblin 1, 2, 3 wins after %d turns with goblin 1 %d hp remaining.\n",turn-1,goblin1hp);
    }
    else if (goblin2hp>0){
        printf("the goblin 2, 3 wins after %d turns with goblin 2 %d hp remaining.\n",turn-1,goblin2hp);
    }
    else if (goblin3hp>0){
        printf("the goblin 3 wins after %d turns with goblin 3%d hp remaining.\n",turn-1,goblin3hp);
    }

    return 0;
}
