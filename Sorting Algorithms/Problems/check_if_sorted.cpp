#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5,4,3,2,1};
    for(int i = 1;i<arr.size()-1;i++){
            if(arr[i]>=arr[i-1]) continue;
            else{
                cout<<"Not sorted";
                return -1;
            }
        }
        cout<<"Sorted";
        return 0;
    }