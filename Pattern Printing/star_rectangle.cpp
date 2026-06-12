#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;
    cout<<"Enter number of columns: "<<endl;
    int columns;
    cin>>columns;
    for(int i = 1;i<=rows;i++){
        for(int j = 1; j<=columns;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}