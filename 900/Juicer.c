#include <stdio.h>

int main(){
    int n, b, d;
    scanf("%d %d %d", &n, &b, &d);
    // array orange
    int orange[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &orange[i]);
    }
    int waste = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (waste > d){
            count += 1;
            waste = 0;
        }
        if (orange[i] <= b){
            waste += orange[i];
            if (waste > d){
                count+= 1;
                waste = 0;
            }
        }
    }
    printf("%d", count);
}