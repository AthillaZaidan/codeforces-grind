#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, k;
    cin >> a >> b >> k;

    string res = to_string(a);
    bool ketemu = false;

    for (int d = 0; d < 10; d++) {
        string coba = res + (char)(d + '0');
        if (stoll(coba) % b == 0) {
            res += (char)(d + '0');
            ketemu = true;
            break;
        }
    }

    if (!ketemu) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 1; i < k; i++) {
        res += '0';
    }

    cout << res << endl;
    return 0;
}
