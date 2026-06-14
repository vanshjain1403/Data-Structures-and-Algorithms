#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int f = 1;
    for(int i = 1;i<=n;i++){
        f = f*i;
    }
    return f;
}
int ncr(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}
void  solve(){
    int n;
    cin>>n;
    int rem = 10-n;
    for(int i = 0;i<n;i++){
        int timewaste;
        cin>>timewaste;
    }
   
    cout<<ncr(rem,2)*(ncr(4,2))<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}