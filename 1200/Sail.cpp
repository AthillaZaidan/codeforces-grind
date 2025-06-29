#include <iostream>
using namespace std;

int main(){
    int t, x0, y0, xt, yt;
    cin >> t >> x0 >> y0 >> xt >> yt;
    char arr[t];
    for (int i = 0; i < t; i++){
        cin >> arr[i];
    }
    int dx = xt - x0;
    int dy = yt - y0;
    bool possible = false;
    int pos = 0;
    if (dx > 0) {
        if (dy > 0){
            for (int i = 0; i < t && !possible; i++){
                if (arr[i] == 'N' && dy != 0){
                    dy--;
                }
                if (arr[i] == 'E'&& dx != 0){
                    dx--;
                }
                if (dy == 0 && dx == 0){
                    possible = true;
                    pos = i;
                }
            }
        } else { // dy < 0 
            for (int i = 0; i < t && !possible; i++){
                if (arr[i] == 'S' && dy != 0){
                    dy++;
                }
                if (arr[i] == 'E' && dx != 0){
                    dx--;
                }
                if (dy == 0 && dx == 0){
                    possible = true;
                    pos = i;
                }
            }
        } 
    } else { // dx < 0
        if (dy > 0){
            for (int i = 0; i < t && !possible; i++){
                if (arr[i] == 'N' && dy != 0){
                    dy--;
                }
                if (arr[i] == 'W' && dx != 0){
                    dx++;
                }
                if (dy == 0 && dx == 0){
                    possible = true;
                    pos = i;
                }
            }
        } else {
            for (int i = 0; i < t && !possible; i++){
                if (arr[i] == 'S' && dy != 0){
                    dy++;
                }
                if (arr [i] == 'W' && dx != 0){
                    dx++;
                }
                if (dy == 0 && dx == 0){
                    possible = true;
                    pos = i;
                }
            }
        }
    }
    pos++;
    if (possible){
        cout << pos << endl;
    } else {
        cout << "-1" << endl;
    }
}