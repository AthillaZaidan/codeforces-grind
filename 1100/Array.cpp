#include <iostream>
#include <vector>
using namespace std;

void printall(vector<int> arr1, vector<int> arr2, vector<int> arr3){
    cout << arr1.size() << " ";
    for (int i = 0; i < arr1.size(); i++){
        if (i != arr1.size() - 1){
            cout << arr1[i] << " ";
        } else {
            cout << arr1[i] << endl;
        }
    }

    cout << arr2.size() << " ";
    for (int i = 0; i < arr2.size(); i++){
        if (i != arr2.size() - 1){
            cout << arr2[i] << " ";
        } else {
            cout << arr2[i] << endl;
        }
    }

    cout << arr3.size() << " ";
    for (int i = 0; i < arr3.size(); i++){
        if (i != arr3.size() - 1){
            cout << arr3[i] << " ";
        } else {
            cout << arr3[i] << endl;
        }
    }
}

int main (){
    int n;
    cin >> n;
    vector<int> arr0(n);
    for (int i = 0; i < n; i++){
        cin >> arr0[i];
    }

    vector<int> arr1, arr2, arr3;

    for (int i = 0; i < arr0.size(); i++){
        if (arr0[i] < 0){
            arr1.push_back(arr0[i]);
            arr0.erase(arr0.begin() + i);
            break;
        }
    }

    bool adaPositif = false;
    for (int i = 0; i < arr0.size(); i++){
        if (arr0[i] > 0){
            arr2.push_back(arr0[i]);
            arr0.erase(arr0.begin() + i);
            adaPositif = true;
            break;
        }
    }

    if (!adaPositif){
        int count = 0;
        for (int i = 0; i < arr0.size(); ){
            if (arr0[i] < 0 && count < 2){
                arr2.push_back(arr0[i]);
                arr0.erase(arr0.begin() + i);
                count++;
            } else {
                i++;
            }
        }
    }

    for (int i = 0; i < arr0.size(); i++){
        arr3.push_back(arr0[i]);
    }

    printall(arr1, arr2, arr3);
}
