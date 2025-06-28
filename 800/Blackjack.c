#include <stdio.h>

int main (){
    int n;
    int point = 10;
    scanf("%d", &n);
    if (n == 10){
        printf("0");
    } else if (n - point == 10){
        printf("15");
    } else if (n - point > 11){
        printf("0");
    } else if (n < point){
        printf("0");
    } else {
        printf("4");
    }
    return 0;
}