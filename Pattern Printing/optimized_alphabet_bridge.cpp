#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        int val = 'A';
        for(int j = 1;j<=n+1-i;j++){
            cout<<char(val++)<<" ";
        }
        for(int j = 1;j<2*i-2;j++){
            cout<<"  ";
            val++;
        }
        for(int j = 1;j<=n+1-i;j++){
            if(i == 1 && j == 1) {
                continue; 
                val++;
            }
            else{
                cout<<char(val++)<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}