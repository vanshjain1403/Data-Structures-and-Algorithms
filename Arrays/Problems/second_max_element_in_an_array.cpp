#include <bits/stdc++.h>
using namespace std;
int secondmax(int arr[],int n){
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]==first) continue;
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second){
            second = arr[i];
        }
    }
    return second;
}
int main() {
    int n;
    cin>>n;
    
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<secondmax(arr,n);
    return 0;
}