#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;  
        for(int i = 0;i<8;i++){
            if(n[i]=='1'){
                cout<<"13\n";
                break;
            }
            if(n[i]=='3'){
                cout<<"31\n";
                break;
            }
        }
    }
    return 0;
}