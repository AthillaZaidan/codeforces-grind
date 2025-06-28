// 13524068
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (){
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    int arr[26] = {0};

    for (int i = 0; i < len; i++){
        if (arr[str[i] - 'a'] == 0){
            arr[str[i] - 'a'] += 1;
        }
    }
    int HurufBeda = 0;
    for (int i = 0; i < 26; i++){
        if (arr[i] == 0){
            HurufBeda++;
        }
    }
    if (HurufBeda % 2 == 0){
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
}