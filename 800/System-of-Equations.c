#include <stdio.h>

int main (){
    int n, m;
    scanf("%d %d", &n, &m);
    int count = 0;
    for (int i = 0; i < 1000; i++){
        for (int j = 0; j < 1000; j++){
            if (i * i  + j == n && j * j + i == m){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}