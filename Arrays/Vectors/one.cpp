#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr={1,2,3,4,5,6};
    arr.push_back(18);
    arr.push_back(17);
    arr.push_back(333);
    arr[2] = 2;
    cout<<arr[2];
    arr.insert(arr.begin()+5,6);
    reverse(arr.begin(),arr.end());
    int i = 0;
    int j = arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return 0;
}