#include <bits/stdc++.h>
using namespace std;
int findpow(int a,int b){
    int p = 1;
    for(int i = 1;i<=b;i++){
        p = p*a;
    }
    return p;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<findpow(a,b);
    return 0;
}