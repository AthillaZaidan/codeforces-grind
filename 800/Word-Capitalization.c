#include <stdio.h>

int main (){
    char string[10000];
    scanf("%s", string);

    if (string[0] <= 'z' && string[0] >= 'a'){
        string[0] -= 32;
    }

    printf("%s", string);
}