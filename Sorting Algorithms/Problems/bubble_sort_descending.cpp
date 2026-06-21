#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();
    for(int i = 0; i<n-1;i++){
        for(int j = 0; j<n-1-i;j++){
            if(arr[j]<arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}