#include <stdio.h>
#include <string.h>

int main (){
    char string[101];
    scanf("%s", string);
    int counth = -1;
    int counte = -1; 
    int countl1 = -1; 
    int countl2 = -1;
    int counto = -1;
    int len = strlen(string);
    for (int i = 0; i < len; i++){
        if (string[i] == 'h'){
            counth = i;
            break;
        }
    }
    for (int i = counth + 1; i < len; i++){
        if (string[i] == 'e'){
            counte = i;
            break;
        }
    }
    for (int i = counte + 1; i < len; i++){
        if (string[i] == 'l'){
            countl1 = i;
            break;
        }
    }
    for (int i = countl1 + 1; i < len; i++){
        if (string[i] == 'l'){
            countl2 = i;
            break;
        }
    }
    for (int i = countl2 + 1; i < len; i++){
        if (string[i] == 'o'){
            counto = i;
            break;
        }
    }
    //printf ("%d %d %d %d %d \n", counth,counte, countl1, countl2, counto);
    if (counth != -1 && counte != -1 && countl1 != -1 && countl2 != -1 && counto != -1){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}