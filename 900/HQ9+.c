#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int main (){
    char p[101];
    scanf("%s", p);
    int len = strlen(p);
    bool benar = false;
    for (int i = 0; i < len; i++){
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            benar = true;
            break;
        }
    }
    if (benar){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}