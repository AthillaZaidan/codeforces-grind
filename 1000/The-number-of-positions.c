#include <stdio.h>

int main (){
    int n, a, b;
    int count = 0;
    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i <= n; i++){
        int depan = i-1;
        int belakang = n-i;
        if(depan >= a && belakang <= b){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}