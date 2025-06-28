#include <stdio.h>
#include <stdbool.h>

bool cekPrima (int n){
    if (n <= 1) {
        return -1;
    }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main (){
    int n, m;
    scanf("%d %d", &n, &m);
    if (cekPrima(n) && cekPrima(m)){
        bool ketemu = false;
        int i = n+1;
        while(!ketemu){
            if (cekPrima(i)){
                if (i == m){
                    printf("YES\n");
                } else {
                    printf("NO\n");
                }
                ketemu = true;
            }
            i++;
        }
    } else {
        printf("NO\n");
    }
    return 0;
}