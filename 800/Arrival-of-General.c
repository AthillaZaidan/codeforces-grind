#include <stdio.h>

int main (){
    int n, i;
    scanf("%d", &n);
    int barisan[n];
    for (i = 0; i < n; i++){
        scanf("%d", &barisan[i]);
    }
    // cari max dan cari min
    int max = barisan[0];
    int min = barisan[0];
    int posmax = 0;
    int posmin = 0;
    for (i = 0; i < n; i++){
        if (barisan[i] > max){
            max = barisan[i];
            posmax = i;
        }
        if (barisan[i] <= min){
            min = barisan[i];
            posmin = i;
        }
    }
    if (posmax > posmin){
        posmin = (n-1) - posmin;
        // printf("%d %d\n", posmax, posmin);
        int total = posmax + posmin;
        printf("%d", total-1);
    } else {
        posmin = (n-1) - posmin;
        // printf("%d %d\n", posmax, posmin);
        int total = posmax + posmin;
        printf("%d", total);
    }
}