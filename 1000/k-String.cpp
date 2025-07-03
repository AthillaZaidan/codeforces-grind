#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;

    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++){
        arr[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++){
        if (arr[i] % k != 0){
            cout << "-1" << endl;
            return 0;
        }
    }

    string res = "";
    for (int i = 0; i < 26; i++){
        int div = arr[i] / k;
        for (int j = 0; j < div; j++){
            res += (char)(i + 97);
        }
    }

    for (int i = 0; i < k; i++){
        cout << res;
    }
    cout << endl;

    return 0;
}
