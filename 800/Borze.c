#include <stdio.h>
#include <string.h>

int main () {
    char str[200];
    scanf("%s", str);
    int len = strlen(str);
    int i = 0;
    int j = 0;
    int angka[1000];
    while (i < len){
        if (str[i] == '-' && str[i+1] == '.'){
            angka[j] = 1;
            j+=1;
            i+=2;
        } else if (str[i] == '-' && str[i+1] == '-'){
            angka[j] = 2;
            j+=1;
            i+=2;
        } else {
            angka[j] = 0;
            j+=1;
            i+=1;
        }
    }
    for (int i = 0; i < j; i++) { 
        printf("%d", angka[i]);   
    }
    return 0;
}