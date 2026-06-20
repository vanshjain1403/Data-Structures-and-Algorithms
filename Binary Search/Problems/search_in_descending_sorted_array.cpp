#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {
        100,95,80,75,65,54,53,42,41,39,37,32,21,20,19,17,11,8,5,4
    };
    int target;
    cin>>target;
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            cout<<"FOUND AT : "<<mid<<endl;
            return 0;
        }else if(arr[mid]<target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout<<"NOT FOUND!"<<endl;
    return 0;
}