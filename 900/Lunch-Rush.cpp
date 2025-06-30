#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main (){
    int n, k;
    cin >> n >> k;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++){
        cin >> arr1[i] >> arr2[i];
    }
    long long max = -99999999999;
    // cari max
    for (int i = 0; i < n; i++){
        int temp;
        if (arr2[i] > k){
            temp = arr1[i] - (arr2[i] - k);
        } else {
            temp = arr1[i];
        }
        if (temp > max){
            max = temp;
        }
    }
    cout << max << endl;
}