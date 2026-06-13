#include <bits/stdc++.h>
using namespace std;
int findmodpow(int a,int b,int m){
    if(b==0) return 1;
    if(b==1) return a;
    int x = (findmodpow(a,b/2,m))%m;
    if(b%2==0){
        return ((x%m)*(x%m))%m;
    }
    else{
        return (((x%m)*(x%m))%m*(a%m))%m;
    }
}
int main() {
    int a,b,mod;cin>>a>>b>>mod;
    cout<<findmodpow(a,b,mod);
    return 0;
}