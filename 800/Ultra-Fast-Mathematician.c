#include <stdio.h>
#include <string.h>

int main (){
    char strA[101];
    char strB[101];
    char strC[101];
    scanf("%s %s", strA, strB);
    int len = strlen(strA);
    for (int i = 0; i < len ; i++){
        if (strA[i] == strB[i]){
            strC[i] = '0';
        } else {
            strC[i] = '1';
        }
    }
    strC[len] = '\0';
    printf("%s", strC);
    return 0;   
}