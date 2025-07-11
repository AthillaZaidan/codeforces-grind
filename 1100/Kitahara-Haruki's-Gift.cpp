#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    int sum = 0;
    int count100 = 0;
    int count200 = 0;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if (temp == 100){
            count100++;
        } else {
            count200++;
        }
        arr.push_back(temp);
        sum += temp;
    }

     if (sum % 200 != 0){
        cout << "NO" << endl;
        return 0;
    }
    int half = sum / 2;
    for (int i = 0; i <= count200; i++){
        int sisa = half - 200 * i;
        if (sisa >= 0 && sisa % 100 == 0 && sisa / 100 <= count100){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
