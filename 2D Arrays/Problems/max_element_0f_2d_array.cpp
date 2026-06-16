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
    int maxval = INT_MIN;
     for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            maxval = max(maxval,arr[i][j]);
        }
    }
    cout<<"Maximum of the elements is: "<<maxval<<endl;
    return 0;
}