#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int x;
    cin >> x;
    int total;
    while (x > 0){
        if (x >= 5){
            x -= 5;
            total += 1;
        } else if (x >= 4){
            x -= 4;
            total += 1;
        } else if (x >= 3){
            x -= 3;
            total += 1;
        } else if (x >= 2){
            x -= 2;
            total += 1;
        } else {
            x -= 1;
            total +=1;
        }
    }
    cout << total << endl;
}
