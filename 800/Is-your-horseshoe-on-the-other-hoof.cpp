#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    set<int> arr;
    
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    cout << n - arr.size() << endl;
}