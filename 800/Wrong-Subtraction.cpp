#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        if (n % 10 != 0){
            n -= 1;
        } else {
            n = n/10;
        }
    }
    cout << n << endl;
}