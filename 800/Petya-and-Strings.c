#include <stdio.h>
#include <string.h>

int main (){
    char s1[101];
    char s2[101];
    scanf("%s %s", s1, s2);
    int i, len, sum1 = 0, sum2 = 0;
    char cc1, cc2;
    len = strlen(s1);
    // convert ke huruf kecil
    for (i = 0; i < len; i++){
        if ((int)s1[i] <= 90 && (int)s1[i] >= 65){
            s1[i] = s1[i] - 'A' + 'a';
        }
    }
    for (i = 0; i < len; i++){
        if ((int)s2[i] <= 90 && (int)s2[i] >= 65){
            s2[i] = s2[i] - 'A' + 'a';
        }
    }
    for (i = 0; i < len; i++){
        cc1 = s1[i];
        cc2 = s2[i];
        if (cc1 < cc2){
            printf("-1");
            return 0;
        } else if (cc1 > cc2){
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}