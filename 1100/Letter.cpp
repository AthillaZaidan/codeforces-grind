#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    s1.erase(remove_if(s1.begin(), s1.end(), ::isspace), s1.end());
    s2.erase(remove_if(s2.begin(), s2.end(), ::isspace), s2.end());
    int count1[52] = {0};
    int count2[52] = {0};
    for (int i = 0; i < s1.size(); i++){
        if (s1[i] <= 'Z' && s1[i] >= 'A'){
            count1[s1[i] - 'A']++;
        } else {
            count1[s1[i] - 'a' + 26]++;
        }
    }

    for (int i = 0; i < s2.size(); i++){
        if (s2[i] <= 'Z' && s2[i] >= 'A'){
            count2[s2[i] - 'A']++;
        } else {
            count2[s2[i] - 'a' + 26]++;
        }
    }

    for (int i = 0; i < 52; i++){
        if (count2[i] > count1[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}