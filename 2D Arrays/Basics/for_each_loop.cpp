#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    int m = 3;
    int arr[3][3];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int x:arr[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}