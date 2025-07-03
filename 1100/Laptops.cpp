#include <bits/stdc++.h>
using namespace std;

bool alex(vector<pair<int, int>> laptop){
    for (int i = 0; i < laptop.size()-1; i++){
        if (laptop[i+1].second < laptop[i].second){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> laptop;
    for (int i = 0; i < n; i++){
        int temp1, temp2;
        cin >> temp1 >> temp2;
        laptop.push_back({temp1, temp2});
    }
    sort(laptop.begin(), laptop.end());
    if (alex(laptop)){
        cout << "Happy Alex" << endl;
    } else {
        cout << "Poor Alex" << endl;
    }
}