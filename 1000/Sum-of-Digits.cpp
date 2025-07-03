#include <bits/stdc++.h>
using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += s[i] - '0';
    }
    return sum;
}

int main() {
    string s;
    cin >> s;

    if (s.length() == 1) {
        cout << 0 << endl;
        return 0;
    }

    int count = 1;
    int sum = digitSum(s);

    while (sum >= 10) {
        int temp = 0;
        while (sum > 0) {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
        count++;
    }

    cout << count << endl;
    return 0;
}
