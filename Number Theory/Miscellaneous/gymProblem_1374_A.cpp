#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,n;
    cin>>x>>y>>n;
    int h =( n/x)*x;
    int k = h+y;
    if(k>n) k = k-(x);
    cout<<k<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}