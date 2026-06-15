#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int* arr = new int[n];
    
    int mini = INT_MAX;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        mini = min(arr[i],mini);
    }
    cout<<"Minimum element: "<<mini;
    delete []arr;
    arr = nullptr;
    return 0;
} 