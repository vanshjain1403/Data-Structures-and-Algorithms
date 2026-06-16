#include <bits/stdc++.h>
using namespace std;

int main() {
    int **arr = new int*[5];
    for(int i = 0; i < 5; i++){
        arr[i] = new int[4];
    }
    for(int i = 0;i<5;i++){
        for(int j =0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<5;i++){
        for(int j =0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    for(int i = 0; i < 5; i++) {
    delete[] arr[i]; 
    }
    delete[] arr; 
    arr = nullptr;
    return 0;
}
