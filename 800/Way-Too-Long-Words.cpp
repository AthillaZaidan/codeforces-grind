#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<string> X; 
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        X.push_back(temp);
    }
    for (int i = 0; i < N; i++) {
        string cetak = X[i];
        if (X[i].size() > 10) {
            string z = cetak[0] + to_string(cetak.size() - 2) + cetak[cetak.size() - 1];
            cout << z << endl;
        } else {
            cout << X[i] << endl;
        }
    }
}