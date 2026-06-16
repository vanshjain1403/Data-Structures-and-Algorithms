#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int m = 5;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int minofmax = INT_MAX;
    for(int i = 0;i<n;i++){
        int maxelement = INT_MIN;
        for(int j = 0;j<m;j++){
            maxelement = max(maxelement,arr[i][j]);
        }
        minofmax = min(maxelement,minofmax);
    }
    cout<<"Min of max elements of each row is: "<<minofmax<<endl;
    return 0;
}