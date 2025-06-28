#include <stdio.h>
#include <string.h>

int main (){
    int N, i, j;
    scanf("%d", &N);
    // siapkan array
    int arr[N][3];
    int count = 0;
    for (i = 0; i < N; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
        if (arr[i][0] + arr[i][1] + arr[i][2] >= 2){
            count++;
        }
    }
    printf("%d", count);
}