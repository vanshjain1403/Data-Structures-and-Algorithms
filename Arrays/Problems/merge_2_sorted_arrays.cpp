#include <bits/stdc++.h>
using namespace std;
vector<int> mergedarrays(int arr1[],int n,int arr2[],int m){
    vector<int> arr;
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            arr.push_back(arr2[j]);
            j++;
        }
        else{
            arr.push_back(arr1[i]);
            arr.push_back(arr2[j]);
            i++;j++;
        }
        
    }
    while(i<n){
        arr.push_back(arr1[i++]);
    }
    while(j<m){
        arr.push_back(arr2[j++]);
    }
    return arr;
}
int main() {
    
    int n;
    int m;
    cout<<"Enter array 1 size: ";
    cin>>n;
    cout<<endl;
    int *arr1 = new int[n];
    cout<<"Enter elements of second sorted array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter array 2 size: ";
    cin>>m;
    cout<<endl;
    int *arr2 = new int[m];
    cout<<"Enter elements of second sorted array: "<<endl;
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> sum = mergedarrays(arr1,n,arr2,m);
    for(auto x:sum){
        cout<<x<<" ";
    }
    return 0;
}