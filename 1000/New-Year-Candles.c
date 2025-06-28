#include <stdio.h>
#include <string.h>

int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    int hours = a;
    while (a >= b){
        int hasil = a / b;
        hours += hasil;
        a = hasil + (a % b);
        // printf("%d\n", a);
        // printf("%d\n", hours);
    }
    printf("%d", hours);
    return 0;
}