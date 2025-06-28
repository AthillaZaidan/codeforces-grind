#include <stdio.h>
#include <string.h>

int main (){
    int arr[5][5];
    int targetx = 2;
    int targety = 2;
    int count = 0;
    int x, y;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    while (x != targetx){
        if (x < targetx){
            x++;
            count++;
        }
        else if (x > targetx) {
            x--;
            count++;
        }
    }
    while (y != targety){
        if (y < targety){
            y++;
            count++;
        }
        else if (y > targety) {
            y--;
            count++;
        }
    }

    printf("%d", count);
}