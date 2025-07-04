#include <bits/stdc++.h>
using namespace std;

bool isAritmetik(vector<int> arr){
    if (arr.size() <= 2) return true;
    int selisih = arr[1] - arr[0];
    for (int i = 1; i < arr.size() - 1; i++){
        if (arr[i+1] - arr[i] != selisih){
            return false;
        }
    }
    return true;
}

int cariSelisih(vector<int> arr){
    if (arr.size() == 1){
        return 0;
    }
    return arr[1] - arr[0];
}


int main(){
    int n;
    cin >> n;
    map<int, vector<int>> pos;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        pos[temp].push_back(i);
    }

    vector<pair<int, int>> hasil;

    for (auto i = pos.begin(); i != pos.end(); i++){
        if (isAritmetik(i->second)){
            int selisih = cariSelisih(i->second);
            hasil.push_back({i->first, selisih});
        }
    }

    cout << hasil.size() << endl;
    for (int i = 0; i < hasil.size(); i++){
        cout << hasil[i].first << " " << hasil[i].second << endl;
    }
}
