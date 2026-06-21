#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {94,86,70,63,59,48,33,24,11,7};
    int n = arr.size();
    for(int i = 0; i < n-1 ;i++){
        int flag = 0;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag==0) break;
    }
    for(int e : arr){
        cout<<e<<" ";
    }
    return 0;
}