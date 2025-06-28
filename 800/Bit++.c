#include <stdio.h>
#include <string.h>

int main (){
    int N, i, count = 0;
    scanf("%d", &N);
    char tambah1[5] = "X++";
    char tambah2[5] = "++X";
    for (i = 0; i < N; i++){
        char c[4];
        scanf("%s", c);
        if (strcmp(c, tambah1) == 0 || strcmp(c, tambah2) == 0){
            count++;
        } else {
            count--;
        }
    }
    printf("%d", count);
}