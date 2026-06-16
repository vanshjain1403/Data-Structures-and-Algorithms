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
    cout<<endl<<endl;
     for(int i = 0;i<n;i++){
        int k = 0;
        int l = m-1;
        while(k<l){
            swap(arr[i][k],arr[i][l]);
            k++;
            l--;
        }
        cout<<endl;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}