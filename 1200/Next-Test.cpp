#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    for (int i = 1; i <= 3000; i++){
        if(s.find(i) == s.end()){
            cout << i << endl;
            return 0;
        }
    }
}