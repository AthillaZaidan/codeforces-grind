#include <stdio.h>
#include <stdbool.h>

void swap (char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int n, t;
    scanf("%d %d", &n, &t);
    char barisan[n];
    scanf("%s", &barisan);
    // cek urutan
    for (int i = 0; i < t; i++){
        for (int j = 0; j < (n-1); j++){
            if (barisan[j] == 'B' && barisan[j+1] == 'G'){
                swap(&barisan[j], &barisan[j+1]);
                j++;
            }
        }
    }
    printf("%s", barisan);
    return 0;
}