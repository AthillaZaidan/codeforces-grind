#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[100005];
    cin >> n;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr[temp] = i + 1;
    }

    int m;
    cin >> m;
    long long total1 = 0;
    long long total2 = 0;

    for (int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        total1 += arr[temp];
        total2 += n - arr[temp] + 1;
    }

    cout << total1 << " " << total2 << endl;
}
