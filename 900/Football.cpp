#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    
    int urut = 1;
    for (int i = 0; i < (s.size()-1); i++){
        if (s[i] == s[i+1]){
            urut += 1;
        } else {
            urut = 1;
        }
        if (urut == 7){
            break;
        }
    }
    if (urut >= 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}