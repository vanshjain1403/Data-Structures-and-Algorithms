#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int,7> elements;
    for(int i=0;i<elements.size();i++){
        cout<<elements[i]<<endl;
    }
    int arr[7];
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }

    for(int i = 0;i<7;i++){
        cin>>elements[i];
        arr[i] = elements[i];
    }
    for(int i = 0;i<7;i++){
        cout<<2*arr[i]<<endl;
    }
    return 0;
}