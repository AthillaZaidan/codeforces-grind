#include <stdio.h>
#include <stdbool.h>

bool cek_angka_sama (int y){
    char str[5];
    sprintf(str, "%d", y);
    for (int i = 0; str[i] != '\0'; i++){
        for(int  j = i + 1; str[j] != '\0'; j++){
            if (str[i] == str[j]){
                return false;
            }
        }
    }
    return true;
}

int main (){
    int y;
    scanf("%d", &y);

    for (int i = y + 1; ; i ++){
        if (cek_angka_sama(i)){
            printf("%d", i);
            break;
        }
    }
    return 0;
}