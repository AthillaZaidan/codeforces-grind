#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    // buat 3 vektor untuk 3 axis
    vector <int> x;
    vector <int> y;
    vector <int> z;
    // masukkan nilai untuk 3 vektor
    for (int i = 0; i < N; i++){
        int a, b, c;
        cin >> a >> b >> c;
        x.push_back(a);
        y.push_back(b);
        z.push_back(c);
    }
    // cari total
    int totalx = 0;
    int totaly = 0;
    int totalz = 0;
 
    for (int i = 0; i < N; i++){
        totalx += x[i];
        totaly += y[i];
        totalz += z[i];
    }
    if (totalx == 0 && totaly == 0 && totalz == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
        
    }
}