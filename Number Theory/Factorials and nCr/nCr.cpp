#include <bits/stdc++.h>
using namespace std;
long long fact(int n){
    long long f = 1;
    for(int i = 1;i<=n;i++){
        f = f*i;
    }
    return f;
}
long long ncr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,r;
    cin>>n>>r;
    long long ans = fact(n)/(fact(n-r)*fact(r));
    cout<<n<<"C"<<r<<" : "<<ans<<endl;
    ans = ncr(n-1,r-1)+ncr(n-1,r);
    cout<<n<<"C"<<r<<" : "<<ans;
    return 0;
}