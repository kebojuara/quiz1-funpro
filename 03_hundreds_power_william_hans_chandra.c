#include <stdio.h>

int main() {
    int n;

    printf("Integer: ");
    scanf("%d", &n);
    printf("100^n: ");

    if(n>=0){
        printf("1");
    }
    if(n>=1){
        for(int i=n;i>=1;i--){
            printf("00");}
            }
    if(n<0){
        printf("0.");
        for(int i=n+1;i<0;i++){
            printf("00");
        }
        printf("01");
    }
return 0;
}
