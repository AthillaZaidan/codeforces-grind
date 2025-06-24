#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int hasil1 = a * b * c;
    int hasil2 = (a + b) * c;
    int hasil3 = a * (b + c);
    int hasil4 = a + b + c;
    int maks = max(max(max(hasil1,hasil2),hasil3),hasil4);
    
    cout << maks << endl;
    return 0;
}
