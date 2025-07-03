#include <bits/stdc++.h>
using namespace std;

bool lucky(int num){
    while (num > 0){
        if (num % 10 != 4 && num % 10 != 7){
            return false;
        }
        num /= 10;
    }
    return true;
}


int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (lucky(i) && n % i == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}