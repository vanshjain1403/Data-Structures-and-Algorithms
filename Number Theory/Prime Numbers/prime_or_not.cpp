#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n<=1){
        cout<<"Number should be greater or equal to 2\n";
        return 0;
    }
    for(int i = 2;i<=n-1;i++){
        if(n%i==0){
            cout<<"Number is composite!\n";
            return 0;
        }
    }
    cout<<"NUmber is prime!\n";
    return 0;
}