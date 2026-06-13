#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<bool>sieve(n+1,true);
    sieve[0] = false;
    sieve[1] = false;
    for(int i = 2;i*i<=n;i++){
        if(sieve[i]==true){
            for(int j = i*i;j<=n;j= j+i){
                sieve[j] = false;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(sieve[i] ==true){
            cout<<i<<" ";
        }
    }
    return 0;
}