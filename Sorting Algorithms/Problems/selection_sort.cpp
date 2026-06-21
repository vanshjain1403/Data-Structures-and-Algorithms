#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    
    for(int i = 0; i<n-1;i++){
        int mini = INT_MAX;
        int minind = -1;
        for(int j = i;j<n;j++){
            if(arr[j]<mini){
                minind = j;
            }
            mini = min(mini,arr[j]);
            

        }
        swap(arr[i],arr[minind]);
        
    }
    for(int e:arr){
        cout<<e<<" ";
    }
    return 0;
}