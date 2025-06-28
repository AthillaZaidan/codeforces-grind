#include <stdio.h>
#include <stdbool.h>

// buat algoritma untuk mengurutkan array dengan bubblesort
void bubblesort (int puzzle[], int  m){
    for (int i = 0; i < m -1; i++){
        for(int j = 0; j < m - 1 - i; j++){
            if(puzzle[j] > puzzle[j+1]){
                int temp = puzzle[j];
                puzzle[j] = puzzle[j+1];
                puzzle[j+1] = temp;
            }
        }
    }
}

int main (){
    int n, m;
    scanf("%d %d", &n, &m);
    // isi array puzzle
    int puzzle[m];
    for (int i = 0; i < m; i++){
        scanf("%d", &puzzle[i]);
    }
    // cek apakah ada yang sama?
    int sama = false;
    for (int i = 0; i < m-1; i++){
        if (puzzle[i] == puzzle[i+1]){
            sama = true;
            break;
        } else {
            continue;
        }
    }
    // buat 2 kemungkinan apakah ada yang sama atau tidak
    if (sama && n == 2){
        int x = 0;
        printf("%d", x);
    } else {
        bubblesort(puzzle, m);
        int min = 10000;
        for (int i = 0; i < m - n + 1; i++){
            if ((puzzle[n-1+i] - puzzle[i]) < min){
                min = puzzle[n-1+i] - puzzle[i];
            }
        }
        printf("%d", min);
    }
}