#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int* arr = new int[n];
    
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        maxi = max(arr[i],maxi);
    }
    cout<<"Maximum element: "<<maxi;
    delete []arr;
    arr = nullptr;
    return 0;
} 