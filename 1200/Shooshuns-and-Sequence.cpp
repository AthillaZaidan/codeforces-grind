#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target = arr[k - 1];
    bool bisa = true;

    for (int i = k; i < n; i++){
        if (arr[i] != target){
            bisa = false;
            break;
        }
    }

    if (!bisa){
        cout << -1 << endl;
    } else {
        int ops = 0;
        for (int i = k - 2; i >= 0; i--){
            if (arr[i] != target){
                ops = i + 1;
                break;
            }
        }
        cout << ops << endl;
    }
}
