#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;
    int x1, y1, x2, y2;
    if (x > 0){
        if (y > 0){
            x1 = 0;
            y2 = 0;
            y1 = x + y;
            x2 = x + y;
        } else { // y < 0
            x1 = 0;
            y2 = 0;
            x2 = x + -1 * (y);
            y1 = (-1 * x) + y;
        }
    } else { // x < 0
        if (y > 0){
            x1 = x + (y * -1);
            y1 = 0;
            x2 = 0;
            y2 = (x * -1) + y;
        } else { // y < 0
            x1 = x + y ;
            y1 = 0;
            x2 = 0;
            y2 = x1;
        }
    }
    cout << x1 << " " << y1 << " " << x2 << " "<< y2 << endl;
}