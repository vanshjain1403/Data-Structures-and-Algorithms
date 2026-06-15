#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int i = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    int j = 4;
    while(i<=j){
        arr[i] = arr[i]+arr[j];
        arr[j] = arr[i]- arr[j];
        arr[i] = arr[i] - arr[j];
        i++;
        j--;
    }
    for(int ele:arr)cout<<ele<<" ";
    return 0;
}