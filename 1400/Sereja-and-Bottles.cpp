#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> botol(n);
    vector<int> opener;

    for (int i = 0; i < n; i++){
        cin >> botol[i].first >> botol[i].second;
        opener.push_back(botol[i].second);
    }

    int tidakbisa = 0;
    for (int i = 0; i < n; i++){
        bool bisa = false;
        for (int j = 0; j < n; j++){
            if (i != j && opener[j] == botol[i].first){
                bisa = true;
                break;
            }
        }
        if (!bisa){
            tidakbisa++;
        }
    }

    cout << tidakbisa << endl;
}
