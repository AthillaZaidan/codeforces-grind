#include <bits/stdc++.h>
using namespace std;

bool magic(string num){
    int len = num.length();
    // cout << len << endl;
    for (int i = 0; i < len; i++){
        if (num[i] != '4' && num[i] != '1'){
            return false;
        }
    }
    // cout << "tes" << endl;
    if (num[0] == '4') return false;

    if (num.find("444") != num.npos) return false;

    return true;
}

int main(){
    string num;
    cin >> num;

    if (magic(num)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}