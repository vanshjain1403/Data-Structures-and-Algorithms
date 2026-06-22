#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,3,4,6,1,2,8,7,1,5,4,1,9,8,4,2};
    int n = arr.size();
    
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int e:arr){
        cout<<e<<" ";
    }
    return 0;
}