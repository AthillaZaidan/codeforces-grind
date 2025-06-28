#include <stdio.h>

int main (){
    int N, max, min, count;
    scanf("%d", &N);
    int arr[N];
    count = 0;
    for (int i = 0; i < N; i++){
        if (i == 0){
            scanf("%d", &arr[i]);
            min = arr[i];
            max = arr[i];
        } else {
            scanf("%d", &arr[i]);
            if (arr[i] > max || arr[i] < min){
                count ++;
            }
            if (arr[i] < min){
                min = arr[i];
            } else if (arr[i] > max){
                max = arr[i];
            }
        }
    }
    printf("%d", count);
}