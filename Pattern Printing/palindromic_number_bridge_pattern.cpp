#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        int val = 1;
        for(int j = 1;j<=n+1-i;j++){
            
            cout<<val++<<" ";
        }
        for(int j = 1;j<2*i-2;j++){
            cout<<"  ";
            
        }
        int lav = n+1-i;
        for(int j = 1;j<=n+1-i;j++){
            
            if(i == 1 && j == 1) {
                continue; 
                lav--;
            }
            else{
                cout<<lav--<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}