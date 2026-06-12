#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n+1-i;j++){
            cout<<"* ";
        }
        for(int j = 1;j<2*i-2;j++){
            cout<<"  ";
        }
        for(int j = 1;j<=n+1-i;j++){
            if(i == 1 && j == 1) {
                continue; 
            }
            else{
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}