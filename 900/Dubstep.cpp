#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string s;
    string res = "";

    cin >> s;
    int i = 0;
    int n = s.length();
    while (i < n){
        if (i + 2 < n && s.substr(i, 3) == "WUB"){
            i += 3;

            if (!res.empty() && res.back() != ' ') {
                res += ' ';
            }

        } else {
            res += s[i];
            i++;
        }
    }
    
    cout << res << endl;    
}