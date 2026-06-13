#include <bits/stdc++.h>
using namespace std;
int findpow(int a,int b){
    if(b==1) return a;
    if(b==0) return 1;
    int x = findpow(a,b/2);
    if(b%2==1){
        return x*x*a;
    }
    else{
        return x*x;
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<findpow(a,b);
    return 0;
}