#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int index,int size){
    if(index==size) return;
    cout<<arr[index]<<" ";
    print(arr,index+1,size);
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    print(arr,0,10);
    return 0;
}