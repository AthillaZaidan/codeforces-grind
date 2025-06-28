#include <stdio.h>
#include <string.h>

int main (){
    char s[101];
    char t[101];
    int count = 0;
    scanf("%s %s", s, t);
    int len = strlen(s);
    int len2 = strlen(t);
    if (len != len2){
        printf("NO");
    } else{
        for (int i = 0; i < len; i++){
            if (s[i] == t[len-i-1]){
                count++;
            }
        }    
        if (count == len){
            printf("YES");
        } else {
            printf("NO");
        }
    }
    return 0;
}