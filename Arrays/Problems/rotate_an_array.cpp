#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int* arr = new int[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"Sum of all the elements in the array is: "<<sum<<endl;
    delete []arr;
    arr = nullptr;
    return 0;
} 