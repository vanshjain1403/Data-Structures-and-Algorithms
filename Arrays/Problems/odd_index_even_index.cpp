#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int*arr = new int[n];
    for(int i = 0;i<n;i++){
        if(i%2==0){
            cin>>arr[i];
            arr[i]+=10;
        }
        else{
            cin>>arr[i];
            arr[i]*=2;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
    arr = nullptr;
    return 0;
}