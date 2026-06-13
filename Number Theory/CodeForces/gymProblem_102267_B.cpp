#include <bits/stdc++.h>
using namespace std;
int isprime(int n){
    vector<bool>sieve(n+1,true);
    sieve[0]=false;
    sieve[1] = false;
    for(int i = 2;i*i<=n;i++){
        if(sieve[i]==true){
            for(int j = i*i;j<=n;j = j+i){
                sieve[j] = false;
            }
        }
    }
    if(sieve[n]==true) return true;
    return false;
}
int main() {
    int n;
    cin>>n;

    if(isprime(n-2)){
        cout<<"2 "<<n-2;
        return 0;
    }
    cout<<"-1";
    return 0;
}