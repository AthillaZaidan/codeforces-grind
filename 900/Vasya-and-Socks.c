#include <stdio.h>
 
int main (){
    int n, m;
    scanf("%d %d", &n, &m);
    int count = 0;
    int day = 0;
    while (n > 0){
        n -= 1;
        count += 1;
        day += 1;
        if (count % m == 0){
            n += 1;
        }
    }
    printf("%d", count);
}