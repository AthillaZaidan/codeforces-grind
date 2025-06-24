#include <stdio.h>

void bubblesort(int arr[], int N){
    for (int i = 0; i < N - 1; i++){
        for (int j = 0; j < N - i - 1; j++){
            if (arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main (){
    int N;
    scanf("%d", &N);
    int coin [N];
    for (int i = 0; i < N; i++){
        scanf("%d", &coin[i]);
    }
    bubblesort(coin, N);
    int sum = 0;
    int banyakcoin = 0;
    int total = 0;
    // isi total nilai coin
    for (int i = 0; i < N; i ++){
        total += coin[i];
    }
    //bandingkan
    for (int i = 0; i < N; i++){
        sum += coin[i];
        total -= coin[i];
        banyakcoin++;
        if (sum > total){
            printf("%d",banyakcoin);
            break;
        }
    }
    return 0;
}