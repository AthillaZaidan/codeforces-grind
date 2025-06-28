// 13524068
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main (){
    char str1[101], str2[101], str3[101];
    scanf("%s %s %s", str1, str2, str3);
    int strlen1, strlen2, strlen3;
    strlen1 = strlen(str1);
    strlen2 = strlen(str2);
    strlen3 = strlen(str3);
    int arr[26] = {0};
    for (int i = 0; i < strlen1; i++){
        arr[str1[i] - 'A']++;
    }
    for (int i = 0; i < strlen2; i++){
        arr[str2[i] - 'A']++;
    }
    for (int i = 0; i < strlen3; i++){
        arr[str3[i] - 'A']--;
    }
    bool cukup = true;
    for (int i = 0; i < 26; i++){
        if (arr[i] != 0){
            cukup = false;
            break;
        }
    }
    if (cukup){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}