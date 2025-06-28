#include <stdio.h>
#include <stdbool.h>

int main (){
    int y, k, n, count;
    count = 0;
    // cari angka pertama
    scanf("%d %d %d", &y, &k, &n);
    int angka1 = k - (y % k);
    for (int i = angka1; i + y <= n; i += k){
        printf("%d ", i);
        count ++;
    }
    if (count == 0){
        printf("-1");
    }
    return 0;
}