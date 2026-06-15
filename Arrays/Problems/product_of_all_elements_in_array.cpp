#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int* arr = new int[n];
    int product = 1;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        product = product * arr[i];
    }
    cout<<"Product of all the elements in the array is: "<<product<<endl;
    delete []arr;
    arr = nullptr;
    return 0;
} 