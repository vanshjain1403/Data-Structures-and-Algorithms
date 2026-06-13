#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n<2){
        cout<<"Enter valis number!";
        return 0;
    }
    for(int i = 2;i*i<=n;i++){
        if((n%i)==0){
            cout<<"Composite!"<<"\n";
            return 0;
        }
    }
    cout<<"Prime\n";
    return 0;
    return 0;
}