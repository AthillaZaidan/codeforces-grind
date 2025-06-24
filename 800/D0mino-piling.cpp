#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int M, N;
    cin >> M >> N;
    for (int i = 1; i <= M*N; i++){
        if (i*2 > M*N){
            cout << i - 1 << endl;
            break;
        }
    }
}