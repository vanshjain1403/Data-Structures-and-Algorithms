#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int m = 4;
    int arr[4][4];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}