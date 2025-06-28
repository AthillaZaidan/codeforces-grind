#include <stdio.h>

int main (){
    int N;
    scanf("%d", &N);
    int waktu = 0;
    int kiri[N];
    int kanan[N];
    int countkiri = 0;
    int countkanan = 0;
    for (int i = 0; i < N; i++){
        scanf("%d", &kiri[i]);
        scanf("%d", &kanan[i]);
        if (kiri[i] == 1){
            countkiri += 1;
        }
        if (kanan[i] == 1){
            countkanan += 1;
        }
    }
    if (countkiri >= N/2 + 1){
        // 1 ada lebih sama dengan 3
        waktu += N - countkiri;
    } else {
        // 1 < 3;
        waktu += countkiri;
    }
    if (countkanan >= N/2 + 1){
        // 1 ada lebih sama dengan 3
        waktu += N - countkanan;
    } else {
        // 1 < 3;
        waktu += countkanan;
    }
    printf("%d", waktu);

    return 0;
}