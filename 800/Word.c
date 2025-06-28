#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool cek_kapital (char string[]){
    int x = strlen(string);
    int kapital = 0;
    int kecil = 0;
    for (int i = 0; i < x; i++){
        if ((int) string[i] <= 'Z' && (int) string[i] >= 'A'){
            kapital += 1;
        } else {
            kecil += 1;
        }
    }
    if (kapital > kecil){
        return true;
    } else {
        return false;
    }
}
int main () {
    char string[101];
    scanf("%s", string);
    int x = strlen(string);
    if (cek_kapital(string)){
        for (int i = 0; i < x; i++){
            if ((int) string[i] <= 'z' && (int) string[i] >= 'a'){
                string[i] -= 32;
            } 
        }
    } else {
        for (int i = 0; i < x; i++){
            if ((int) string[i] <= 'Z' && (int) string[i] >= 'A' ){
                string[i] += 32;
            } 
        }
    }
    // cetak string
    printf("%s", string);

    return 0;
}