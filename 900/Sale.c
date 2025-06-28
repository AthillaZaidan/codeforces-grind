#include <stdio.h>

void bubblesort (int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    // isi array
    int tv[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &tv[i]);
    }
    // sort array
    bubblesort(tv, n);
    // tambahkan data
    int total = 0;
    for (int i = 0; i < m; i++){
        if (tv[i] <= 0){
            total += -1 * tv[i];
        } else {
            break;
        }
    }
    printf("%d", total);
}