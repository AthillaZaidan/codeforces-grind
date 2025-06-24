#include <stdio.h>

int main (){
    int N;
    scanf("%d", &N);
    char warna[N];
    scanf("%s", &warna);
    int ganti = 0;
    for (int i = 0; i < (N-1); i ++){
        if (warna[i] == warna [i+1]){
            ganti += 1;
        } else {
            continue;
        }
    }
    printf("%d", ganti);
    return 0;
}