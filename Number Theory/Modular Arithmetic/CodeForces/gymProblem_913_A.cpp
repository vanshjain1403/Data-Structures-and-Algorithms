#include <bits/stdc++.h>
using namespace std;
int exp(int n){
    if(n==0) return 1;
    if(n==1) return 2;
    int x = exp(n/2);
    if(n%2==0){
        return (x)*(x);
    }
    else{
        return ((x)*(x)*2);
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    if(n>30) cout<<m;
    else{
        int val = exp(n);
        cout<<m%val<<endl;
    }
    
   
    return 0;
}