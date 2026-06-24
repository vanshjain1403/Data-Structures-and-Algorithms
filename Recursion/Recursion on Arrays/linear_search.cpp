#include <bits/stdc++.h>
using namespace std;
bool exists(int arr[], int index, int size, int target){
    if(index==size) return false;
    if(arr[index]==target) return true;
    return exists(arr,index+1,size,target);
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target;
    cin>>target;
    cout<<exists(arr,0,9,target);
    return 0;
}