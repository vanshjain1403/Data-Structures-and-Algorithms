#include <bits/stdc++.h>
using namespace std;
pair<int,int> twosum(int arr[],int n,int sum){
    pair<int,int> p;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                p.first = arr[i];
                p.second=arr[j];
                break;
            }
        }
    }
    return p;
}
int main() {
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<twosum(arr,n,sum).first<<" "<<twosum(arr,n,sum).second;
    return 0;
}