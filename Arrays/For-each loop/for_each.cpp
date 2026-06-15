#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    for(int x:arr){
        x = x*2;
        cout<<x<<" ";
    }
    cout<<endl;
    for(int i = 0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}