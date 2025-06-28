#include <stdio.h>
#include <string.h>

int main (){
    int n;
    scanf("%d", &n);
    double sum = 0;
    double count = 0;
    for (int i = 0; i < n; ++i){
        int x;
        scanf("%d", &x);
        sum += x;
        count += 1;
    }
    double rerata = sum / n;
    printf("%0.12f", rerata);
    return 0;
}