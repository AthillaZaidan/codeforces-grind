// 13524068
#include <stdio.h>
#include <stdbool.h>
unsigned long long hasil (unsigned long long n, unsigned long long m, unsigned long long a){
    unsigned long long x = (n + a - 1)/a;
    unsigned long long y = (m + a - 1)/a;
    return x * y;
}

int main (){
    unsigned long long n, m, a;
    scanf("%llu %llu %llu", &n, &m, &a);   
    unsigned long long jawab = hasil (n, m, a);
    printf("%llu", jawab);
}