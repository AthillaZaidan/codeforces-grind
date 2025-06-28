#include <stdio.h>

void bubbleSort(int arr[], int n, int bonus[]) {
    int i, j, temp1, temp2;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // ganti array power
                temp1 = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp1;
                // ganti array bonus jg
                temp2 = bonus[j];
                bonus[j] = bonus[j+1];
                bonus[j+1] = temp2;
            }
        }
    }
}

int main (){
    int s, n;
    scanf("%d %d", &s, &n);
    int power[n];
    int bonus[n];
    for (int i = 0; i < n; i++){
        scanf("%d %d", &power[i], &bonus[i]);
    }
    bubbleSort(power, n, bonus);
    int count = 0;
    for (int i = 0; i < n; i++){
        if (s > power[i]){
            s += bonus[i];
            count += 1;
        } else {
            printf("NO");
            break;
        }
    }
    if (count == n){
        printf("YES");
    }
    return 0;
}