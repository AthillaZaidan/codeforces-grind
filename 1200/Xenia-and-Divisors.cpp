#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    vector<vector<int>> kelompok;

    while (!arr.empty()){
        vector<int> hasil;
        for (int i = 0; i < arr.size(); i++){
            if (hasil.empty()){
                hasil.push_back(arr[i]);
                arr.erase(arr.begin() + i);
                break;
            }
        }

        bool ketemu = false;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] > hasil.back() && arr[i] % hasil.back() == 0){
                hasil.push_back(arr[i]);
                arr.erase(arr.begin() + i);
                ketemu = true;
                break;
            }
        }

        if (!ketemu){
            cout << -1 << endl;
            return 0;
        }

        ketemu = false;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] > hasil.back() && arr[i] % hasil.back() == 0){
                hasil.push_back(arr[i]);
                arr.erase(arr.begin() + i);
                ketemu = true;
                break;
            }
        }

        if (!ketemu || hasil.size() != 3){
            cout << -1 << endl;
            return 0;
        }

        kelompok.push_back(hasil);
    }

    for (int i = 0; i < kelompok.size(); i++){
        vector<int> hasil = kelompok[i];
        for (int j = 0; j < hasil.size(); j++){
            if (j == hasil.size() - 1){
                cout << hasil[j] << endl;
            } else {
                cout << hasil[j] << " ";
            }
        }
    }
}
