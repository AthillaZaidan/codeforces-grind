#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
    }

    unordered_set<char> vokal = {'a', 'i', 'u', 'e', 'o', 'y'};

    string hasil;
    for (int i = 0; i < s.size(); i++) {
        if (vokal.find(s[i]) == vokal.end()) {
            hasil += s[i];
        }
    }

    string hasil_akhir;
    for (int i = 0; i < hasil.size(); i++) {
        hasil_akhir += '.';
        hasil_akhir += hasil[i];
    }

    cout << hasil_akhir << endl;

    return 0;
}