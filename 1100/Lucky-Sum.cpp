#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n){
    string temp = to_string(n);
    for (int i = 0; i < temp.size(); i++){
        if (temp[i] != '4' && temp[i] != '7'){
            return false;
        }
    }
    return true;
}

int next(int n){
    while (!isLucky(n)){
        n++;
    }
    return n;
}

int main(){
    int l, r;
    cin >> l >> r;
    long long sum = 0;
    while (l <= r){
        int nxt = next(l);
        int batas = min(r, nxt);
        for (int i = l; i <= batas; i++){
            sum += nxt;
        }
        l = batas + 1;
    }
    cout << sum << endl;
}
