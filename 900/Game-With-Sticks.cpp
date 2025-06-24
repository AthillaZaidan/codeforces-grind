#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
    int ronde;
    while (n*m > 0){
        if (n < m){
            n -= 1;
            ronde += 1;
        } else {
            m -= 1;
            ronde += 1;
        }
    }
    if (ronde % 2 == 0){
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }
}