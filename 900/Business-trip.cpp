#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
    cin >> k;
    vector<int> bulan;
    for (int i = 0; i < 12; i++){
        int x;
        cin >> x;
        bulan.push_back(x);
    }
    //sort
    sort(bulan.begin(), bulan.end(), greater<int>());
    //
    int total = 0;
    int banyak = 0;
    for (int i = 0; i < 12; i++){
        if (total >= k){
            break;
        }
        total += bulan[i];
        banyak += 1;
    }
    if (total < k){
        cout << "-1" << endl;
    } else {
        cout << banyak << endl;
    }
}