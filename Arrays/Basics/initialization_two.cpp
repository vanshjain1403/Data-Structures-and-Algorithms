#include <bits/stdc++.h>
#include<array>//not needed actually with bits/stdc++ headerfile
using namespace std;

int main() {
    array<int,5> arr = {1,2,3,4,5};//stl
    for(int i = 0; i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    int i = 0;
    while(i<arr.size()){
        cout<<arr[i]<<endl;
        i++;
    }
    

    return 0;
}