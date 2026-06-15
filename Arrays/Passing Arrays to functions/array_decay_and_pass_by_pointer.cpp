#include <bits/stdc++.h>
using namespace std;
void change1(int arr[]){
    arr[0] = 1403;
    arr[1] = 45;

}
void change2(int *arr){
    arr[2] = 1403;
    arr[3] = 45;
    cout<<arr[0]<<endl;

}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    change1(arr);
    change2(arr+2);
    for(int i = 0; i<9; i++ ){
        cout<<arr[i]<<" ";
    }
    
    return 0;
} 