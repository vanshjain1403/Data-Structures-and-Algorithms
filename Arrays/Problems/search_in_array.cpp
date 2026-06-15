#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int* arr = new int[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element to look for: ";
    cin>>element;
    bool exists = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==element){
            exists=1;
        }
    }
    if(exists==1) cout<<"Exists!"<<endl;
    else cout<<"Doesn't exist!"<<endl;
   
    delete []arr;
    arr = nullptr;
    
    return 0;
} 