#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i, j;

    for (i = 0; i <= n; i++){
        for (j = 0; j < 2 * (n - i); j++) cout << " ";
        int x = 0;
        for (j = 0; j < i; j++){
            cout << x << " ";
            x++;
        }
        for (j = i; j >= 0; j--){
            cout << j;
            if (j != 0) cout << " ";
        }
        cout << endl;
    }

    for (i = n - 1; i >= 0; i--){
        for (j = 0; j < 2 * (n - i); j++) cout << " ";
        int x = 0;
        for (j = 0; j < i; j++){
            cout << x << " ";
            x++;
        }
        for (j = i; j >= 0; j--){
            cout << j;
            if (j != 0) cout << " ";
        }
        cout << endl;
    }
}
