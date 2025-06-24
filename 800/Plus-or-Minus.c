#include <stdio.h>

int main (){
    int N;
    scanf("%d", &N);
    int a[N];
    int b[N];
    int c[N];
    // isi array
    for (int i = 0; i < N; i++){
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }
    for (int i = 0; i < N; i++){
        if (a[i] + b[i] == c[i]){
            printf("+\n");
        } else {
            printf("-\n");
        }
    }
    return 0;
}