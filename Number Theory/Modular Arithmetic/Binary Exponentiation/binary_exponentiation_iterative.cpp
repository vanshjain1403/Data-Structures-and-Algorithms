#include <bits/stdc++.h>
using namespace std;
int findpow(int a,int b){
    int ans = 1;
    while(b!=0){
        if(b&1) ans = ans * a;
        a = a*a;
        b = b>>1;
        
    }
    return ans;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<findpow(a,b);
    return 0;
}